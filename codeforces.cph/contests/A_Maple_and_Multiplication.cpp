#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solution() {
 int a , b ;
 cin >> a >> b ;
 if (a == b) {
    cout << 0 << endl;
 } else if (max(a,b)%min (a,b)==0) {
    cout << 1 << endl;
 } else {
    cout << 2 << endl;
 }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1; 
    cin >> T; // uncomment if multiple test cases
    while (T--) {
        solution();
    }
    return 0;
}
