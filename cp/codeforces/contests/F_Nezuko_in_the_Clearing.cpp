#include <bits/stdc++.h>
using namespace std;

bool can_reach(long long h, long long d, long long R) {
    long long num_blocks = R + 1;
    long long q = d / num_blocks;
    long long r = d % num_blocks;

    auto cost = [&](long long m) {
        return m * (m + 1) / 2;
    };

    long long total_damage = r * cost(q + 1) + (num_blocks - r) * cost(q);
    return h + R > total_damage;
}

void solve() {
    long long h, d;
    cin >> h >> d;

    long long low = 0, high = 2000000000, min_rests = high;

    while (low <= high) {
        long long mid = low + (high - low) / 2;
        if (can_reach(h, d, mid)) {
            min_rests = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    cout << d + min_rests << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}
