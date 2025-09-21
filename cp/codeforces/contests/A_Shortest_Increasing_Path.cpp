#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solution() {
   int x,y; cin>>x>>y;
   if (x == y || y == 1 || x - y == 1) cout << -1<<endl;
   else if (x < y) cout << 2<<endl;
   else cout<<3<<endl;
  
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
