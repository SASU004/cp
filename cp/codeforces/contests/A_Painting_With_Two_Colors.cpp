#include <iostream>
using namespace std;
#define ll long long


void solve() {
    ll n, a, b;
    cin >> n >> a >> b;

    if ((n % 2) != (b % 2)) {
        cout << "NO" << endl;
        return; 
    }


    if ((n % 2) == (a % 2)) {
        cout << "YES" <<endl;
        return;
    }

    if (a <= b) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   
    int t;
    cin >> t;
    
   
    while (t--) {
        solve();
    }

    return 0;
}