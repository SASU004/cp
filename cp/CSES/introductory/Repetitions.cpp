#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solution() {
    string s ;
    cin>>s;
    int n =s.length();
    int block = 0;
    int ans =0;
    for (int i = 0; i < n; i++) {
        if (i!=0&&s[i] == s[i-1]) {
            block++;
          
        } else {
            ans = max(ans, block);
            block = 1;
        }
    }ans = max(ans, block);
    cout << ans << endl;
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
