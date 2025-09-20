#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solution() {
    int N;
    cin >> N;

    vector<int> A(N+1), B(N+1);
    vector<vector<int>> dependents(N+1); // skills depending on this skill

    for (int i = 1; i <= N; i++) {
        cin >> A[i] >> B[i];
        if (A[i] != 0) dependents[A[i]].push_back(i);
        if (B[i] != 0 && B[i] != A[i]) dependents[B[i]].push_back(i);
    }

    vector<bool> learned(N+1, false);
    queue<int> q;

    // initially learned skills
    for (int i = 1; i <= N; i++) {
        if (A[i] == 0 && B[i] == 0) {
            learned[i] = true;
            q.push(i);
        }
    }

    int learnedCount = 0;

    while (!q.empty()) {
        int skill = q.front();
        q.pop();
        learnedCount++;

        for (int dependent : dependents[skill]) {
            if (!learned[dependent] && (learned[A[dependent]] || learned[B[dependent]])) {
                learned[dependent] = true;
                q.push(dependent);
            }
        }
    }

    cout << learnedCount << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;
    // cin >> T; // uncomment if multiple test cases
    while (T--) {
        solution();
    }
    return 0;
}
