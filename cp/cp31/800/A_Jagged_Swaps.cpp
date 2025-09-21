#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solution() {
    int n ;
    cin >> n;
 vector < int > v(n);
 for ( int i = 0 ; i<n ; i++ ){
    cin >> v[i];
 }
if ( v[0]==1){ cout << "YES"<<endl;}
 else { cout<<"NO"<<endl;}
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
