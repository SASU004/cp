#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solution() {
    int n ,k;
       cin>>n>>k;
 vector < int > v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector < int >copy_v=v;
    sort(copy_v.begin(),copy_v.end());

    if (v==copy_v||k>1){
        cout<<"YES"<<endl;
        return;
     } else {
            cout<<"NO"<<endl;
            return;
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
