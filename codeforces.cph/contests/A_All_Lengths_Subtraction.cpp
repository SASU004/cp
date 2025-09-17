#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n + 2); 
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    bool flag = true;
    for (int i = 2; i <= n - 1; ++i) {
        if (a[i - 1] > a[i] && a[i] < a[i + 1]) {
            flag = false;
            break;
        }
    }

    if (flag)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

int main() {
    int t = 1;
    cin >> t; // Uncomment if multiple test cases
    while (t--) {
        solve();
    }
    return 0;
}
