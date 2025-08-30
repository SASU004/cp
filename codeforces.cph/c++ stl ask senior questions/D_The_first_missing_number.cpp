#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solution() {
    ll m, n, x;
    cin >> n >> m;
    set<ll> a;
    for (int i = 0; i < n; i++) {
        cin >> x;
        a.insert(x);
    }
    for (int i = -m; i < m; i++) {
        if (a.count(i) == 0) {
            cout << i << "\n";
            break;
        }
    }
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1; 
    // cin >> T; // uncomment if multiple test cases
    while (T--) {
        solution();
    }
    return 0;
}
