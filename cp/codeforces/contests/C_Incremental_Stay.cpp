#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solution() {
    int n;
    cin >> n;
    vector<ll> a(2*n);
    for (int i = 0; i < 2*n; i++) cin >> a[i];

    vector<ll> gaps(2*n-1);
    for (int i = 0; i < 2*n-1; i++) gaps[i] = a[i+1] - a[i];

    sort(gaps.rbegin(), gaps.rend()); // descending

    ll sum_gaps = 0;
    vector<ll> ans(n+1,0);
    ll total_span = a[2*n-1] - a[0];

    for (int k = 1; k <= n; k++) {
        if (k == 1) sum_gaps = 0;
        else sum_gaps += gaps[k-2]; // remove n-k largest? we will fix below
        ans[k] = total_span - sum_gaps;
    }

    for (int k = 1; k <= n; k++) cout << ans[k] << (k==n?"\n":" ");
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solution();
}
