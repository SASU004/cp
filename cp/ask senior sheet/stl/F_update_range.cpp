#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solution() {
    int n, q;
    cin >> n >> q;
    vector<int> v(n + 1);

    // Input array
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }

    vector<int> op(n + 2);

    // Process queries
    while (q--) {
        int l, r, val;
        cin >> l >> r >> val;
        op[l] += val;
        op[r + 1] -= val;
    }

    // Prefix sum on operations
    for (int i = 1; i <= n; i++) {
        op[i] += op[i - 1];
    }

    // Apply updates
    for (int i = 1; i <= n; i++) {
        v[i] += op[i];
    }

    // Print result
    for (int i = 1; i <= n; i++) {
        cout << v[i] << " ";
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;
    //  cin >> T; // uncomment if multiple test cases
    while (T--) {
        solution();
    }
    return 0;
}
