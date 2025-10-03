#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solution() {
    int n ;
    cin>>n;
    vector<int> a(n);
    for ( int i = 0; i<n;i++){
       cin>>a[i];
    }
    ll answer =0;
    for( int i=1;i <n;i++){
        if (a[i]<a[i-1]){
            answer += (a[i-1]-a[i]);
            a[i]=a[i-1];
        }
    }cout << answer << endl;
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
