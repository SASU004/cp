#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int ans[N];
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		string s;
		cin>>s;
		int l=s.size(),cnt=0,num1=0,num2=n+1;
		bool flg=1;
		for(int i=0;i<l;i++){
			if(s[i]=='1') cnt++,ans[i+1]=++num1;
			if(s[i]=='0') cnt=0,ans[i+1]=--num2;
			if(cnt>=k) flg=0;
		}
		if(flg){
			cout<<"YES\n";
			for(int i=1;i<=n;i++) cout<<ans[i]<<' ';
			cout<<endl;
		}
		else cout<<"NO\n";
	}
	return 0;
} 
