#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
void solution() {
    int n ;
    cin>>n;
    for ( int i =1; i <=n;i++){
        
        ll good=(ll)i*i* (i*i-1)/2;
        ll bad=(ll) 4*(i-1)*(i-2);
        cout << good-bad<< endl;
    }
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