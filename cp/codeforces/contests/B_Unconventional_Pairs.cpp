#include <bits/stdc++.h>
using namespace std;

void solution() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    long long max_diff = 0;
    for (int i = 0; i < n; i += 2) {
        max_diff = max(max_diff, a[i + 1] - a[i]);
    }

    cout << max_diff << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solution();
}
