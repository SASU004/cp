#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solution() {
    int n ;
    cin>>n;
    vector<bool> a(n+1);
    for ( int i = 0; i<n-1;i++){
        int x;
       cin>>x;
        a[x]=true;
    }
    for ( int x = 1; x<=n ;x++){
        if(!a[x]){
            cout<<x<<endl;
            return ;

}
}}
        
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
