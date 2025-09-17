#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solution() {
array< int,3> a;
cin >> a[0]>>a[1]>>a[2];

for( int i = 0 ;i<5; i++)
    (*min_element(a.begin(),a.end()))++;

cout<< a[0] * a[1] * a[2]<<endl;
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
