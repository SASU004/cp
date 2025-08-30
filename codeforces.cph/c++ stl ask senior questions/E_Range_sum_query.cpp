#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solution() {
    int n , q;
    cin >> n >> q;
    vector<ll> v(n+1), prefsum(n+1);
    
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        prefsum[i] = prefsum[i-1] + v[i];
    }

    while (q--) {
        int L, R;
        cin >> L >> R;
        cout << prefsum[R] - prefsum[L-1] << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1; 
    // cin >> T;
    while (T--) {
        solution();
    }
    return 0;
}
