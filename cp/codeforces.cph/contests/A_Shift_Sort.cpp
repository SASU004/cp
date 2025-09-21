#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solution() {
    int n ;
 cin >> n ; 
  string s ; 
   cin >> s ;
    int ones = count(all(s),'1');
    int zeros = n - ones ;
    int temp = 0 ;
     for ( int i = 0 ; i < n ;i ++){
        if ( i <  zeros )
        temp +=s[i]=='1';
        else 
        temp +=s[i]=='0';
     }
     cout << ( temp )/2<< endl;
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
