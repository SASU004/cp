#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; i++) cin >> A[i];

        bool hasOneOnOddIndex = false;  
        bool hasOneOnEvenIndex = false;  

        for (int i = 0; i < N; i++) {
            if (A[i] == 1) {
                if (i % 2 == 0) hasOneOnOddIndex = true;
                else hasOneOnEvenIndex = true;
            }
        }

        bool unreachable = !(hasOneOnOddIndex && hasOneOnEvenIndex);
        cout << (unreachable ? "Yes" : "No") << "\n";
    }

    return 0;
}
