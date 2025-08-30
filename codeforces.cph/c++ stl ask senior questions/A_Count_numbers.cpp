#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solution() {
 ll n,q,x,y;
map<ll,ll> m;
cin>>n>>q;
while(q--)
{     cin>>x>>y;
      if ( x==1){
    m[y]++;
}
else {


 cout<<m[y]<<"\n";
}
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
