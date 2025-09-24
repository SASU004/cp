#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solution() {
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    for (int i = 0; i < m; ++i) cin >> a[i];

    vector<int> len;
    vector<int> start;
    int i = 0;
    while (i < m) {
        int st = a[i];
        int j = i;
        while (j + 1 < m && a[j + 1] == a[j] + 1) ++j;
        len.push_back(j - i + 1);
        start.push_back(st);
        i = j + 1;
    }

    for (int k = 1; k < (int)start.size(); ++k) {
        if (start[k] != 1) {
            cout << 0 << "\n";
            return;
        }
    }

    int t = (int)len.size();
    int s = start[0];

    if (t == 1) {
        int min_r = s + len[0] - 1;
        if (min_r > n) cout << 0 << "\n";
        else cout << (n - min_r + 1) << "\n";
        return;
    } else {
        ll r = (ll)s + (ll)len[0] - 1;
        if (r > n) {
            cout << 0 << "\n";
            return;
        }
        for (int k = 1; k <= t - 2; ++k) {
            ll expected_len = r + k;
            if (len[k] != expected_len) {
                cout << 0 << "\n";
                return;
            }
        }
        ll lastBlockIndex = r + (t - 1);
        if (lastBlockIndex > n) {
            cout << 0 << "\n";
            return;
        }
        if (len[t - 1] > lastBlockIndex) {
            cout << 0 << "\n";
            return;
        }
        cout << 1 << "\n";
        return;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;
    cin >> T;
    while (T--) {
        solution();
    }
    return 0;
}
