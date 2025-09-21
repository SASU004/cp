#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solution() {
    int a,b,c;
    cin>>a>>b>>c;
    if (a==b||b==c||c==a){
        cout << "Yes" << endl;
    } else cout << "No" << endl;
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
