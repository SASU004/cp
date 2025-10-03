#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, k;
    cin >> n >> k;
    
    vector<int> counts(n + 1, 0);
    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        if (val <= n) counts[val]++;
    }

    int missing_lt_k = 0;
    for (int i = 0; i < k; ++i) {
        if (counts[i] == 0) missing_lt_k++;
    }

    int count_of_k = counts[k];
    cout << max(missing_lt_k, count_of_k) << "\n";
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) solve();
    
    return 0;
}
