#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solution() {
    ll row, col;
    cin>>row>>col;
    ll layer = max(row, col);
    if (layer % 2 == 1) {
        swap(row, col);
    }
    if(col==layer){
        cout<<(ll)(layer-1)* (layer-1)+1 + row -1<<endl;
    }else {
        cout<<(ll)layer*layer - (col-1)<<endl;
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
