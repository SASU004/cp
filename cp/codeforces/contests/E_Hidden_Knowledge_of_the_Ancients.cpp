#include <bits/stdc++.h>
using namespace std;

#define int long long

long long count_at_most(int n, int K, int l, int r, const vector<int>& a) {
    if (K < 0) return 0;

    long long total_count = 0;
    unordered_map<int, int> freq;
    int left = 0;

    for (int right = 0; right < n; ++right) {
        freq[a[right]]++;
        while (freq.size() > K) {
            freq[a[left]]--;
            if (freq[a[left]] == 0) freq.erase(a[left]);
            left++;
        }

        long long start_bound = max((long long)left, (long long)right - r + 1);
        long long end_bound = min((long long)right, (long long)right - l + 1);
        if (start_bound <= end_bound) total_count += (end_bound - start_bound + 1);
    }
    return total_count;
}

void solve() {
    int n, k, l, r;
    cin >> n >> k >> l >> r;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    long long count_le_k = count_at_most(n, k, l, r, a);
    long long count_le_k_minus_1 = count_at_most(n, k - 1, l, r, a);

    cout << count_le_k - count_le_k_minus_1 << "\n";
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}
