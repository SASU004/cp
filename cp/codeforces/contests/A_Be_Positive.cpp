#include <bits/stdc++.h>
using namespace std;

void solution() {
    int n;
    cin >> n;
    vector<int> a(n);
    int zeros = 0, negs = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 0) zeros++;
        if (a[i] == -1) negs++;
    }

    int ops = zeros + (negs % 2) * 2;
    cout << ops << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solution();
    return 0;
}
