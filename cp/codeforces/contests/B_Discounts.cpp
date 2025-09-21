#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> b(k);

    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < k; ++i)
        cin >> b[i];

    // Sort prices in descending order
    sort(a.rbegin(), a.rend());
    // Sort vouchers in ascending order
    sort(b.begin(), b.end());

    int ans = 0;
    int idx = 0; // index in cost array

    // Use each voucher in order
    for (int i = 0; i < k && idx < n; ++i) {
        int group_size = b[i];
        
        // Add all items except the cheapest one in the group
        for (int j = 0; j < group_size && idx < n; ++j) {
            if (j != group_size - 1) {
                ans += a[idx];
            }
            idx++;
        }
    }

    // Add remaining items at full price
    while (idx < n) {
        ans += a[idx];
        idx++;
    }

    cout << ans << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
