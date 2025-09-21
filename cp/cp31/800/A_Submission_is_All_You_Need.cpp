#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t= 1; 
    cin >> t; // uncomment if multiple test cases
    while (t--) {
        int n,temp,sum=0;
        cin>>n;
        vector <int> a(n);
        for(int i=0;i<n;i++){
            cin>>temp;
            sum+=temp+(temp==0);
            
    }cout<<sum<<endl;
  
        }
    return 0;
}
