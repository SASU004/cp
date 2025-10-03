#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solution() {
    int n;
    cin >> n;

    if (n == 2 || n == 3) {
        cout << "NO SOLUTION" << endl;
        return;
    }

    // Print evens first
    for (int i = 2; i <= n; i += 2) {
        cout << i << " ";
    }
    // Then odds
    for (int i = 1; i <= n; i += 2) {
        cout << i << " ";
    }

    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solution(); // only one input n, no T
    return 0;
}
