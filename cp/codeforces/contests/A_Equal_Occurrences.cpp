#include <bits/stdc++.h>
using namespace std;

int helper(vector<int>& a){
    vector<int> freq;
    int cnt = 1, n = a.size();
    for(int i=1;i<n;i++){
        if(a[i]==a[i-1]) cnt++;
        else {freq.push_back(cnt); cnt=1;}
    }
    freq.push_back(cnt);
    int ans=0, mx=*max_element(freq.begin(),freq.end());
    for(int k=1;k<=mx;k++){
        int c=0;
        for(int f:freq) if(f>=k) c++;
        ans=max(ans,c*k);
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        cout<<helper(a)<<"\n";
    }
}
