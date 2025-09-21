#include <bits/stdc++.h>
using namespace std;

#define INF 1000

int H, W;
vector<int> grid;

bool ok(int prev, int curr) {
    
    for (int j = 0; j < W - 1; j++) {
        if ((prev&(1<<j)) && (prev&(1<<(j+1))) &&
            (curr&(1<<j)) && (curr&(1<<(j+1)))) return false;
    }
    return true;
}

int countFlips(int mask, int rowMask) {
    int flips = 0;
    for (int j = 0; j < W; j++)
        if (((mask>>j)&1) != ((rowMask>>j)&1)) flips++;
    return flips;
}

void solution() {
    cin >> H >> W;
    grid.resize(H);
    for (int i = 0; i < H; i++) {
        string s; cin >> s;
        int mask = 0;
        for (int j = 0; j < W; j++) if (s[j]=='#') mask |= (1<<j);
        grid[i] = mask;
    }

    int maxMask = 1<<W;
    vector<vector<int>> dp(H, vector<int>(maxMask, INF));


    for (int mask = 0; mask < maxMask; mask++)
        dp[0][mask] = countFlips(mask, grid[0]);

    for (int i = 1; i < H; i++) {
        for (int mask = 0; mask < maxMask; mask++) {
            for (int prev = 0; prev < maxMask; prev++) {
                if (ok(prev, mask)) {
                    dp[i][mask] = min(dp[i][mask], dp[i-1][prev] + countFlips(mask, grid[i]));
                }
            }
        }
    }

    int ans = INF;
    for (int mask = 0; mask < maxMask; mask++) ans = min(ans, dp[H-1][mask]);
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; cin >> T;
    while (T--) solution();
}
