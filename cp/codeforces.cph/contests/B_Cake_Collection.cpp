#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solution() {
int n ;
ll m ;
cin >> n >> m;
vector < ll> a(n);
for ( int i = 0 ; i< n ;++ i){
    cin >> a[i];}
    sort (a.begin(),a.end(),greater < ll> ());
    ll x= min < ll> (n,m);
    ll y = 0;
    for (ll i = 0 ; i< x ; ++ i ){
     y +=a[i]*(m-i);

    }cout << y << endl;
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
