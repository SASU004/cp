#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solution() {
//    n = problem m= no of people
int n,m,k;
cin>>n>>m>>k;
map<int,set<int>>solved;
vector<bool> completed(n + 1, false);

vector<int> order;
for (int i =0;i<k;i++){
 int a,b;
 cin >> a >> b;
 solved[a].insert(b);
 if (!completed[a] && (int)solved[a].size() == m) {
     completed[a] = true;   
     order.push_back(a);  
 }
} for (int i = 0; i < (int)order.size(); i++) {
        cout << order[i] << (i + 1 < (int)order.size() ? " " : "");
    }
    cout <<endl;
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

