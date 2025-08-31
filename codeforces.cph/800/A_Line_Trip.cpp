#include <bits/stdc++.h>

using namespace std;

int main(){

  int t;

  cin>>t;

  while(t--){

  int n,x;

  cin>>n>>x;

  int arr[n+1];

  int min_fuel=0;

  for(int i=1;i<=n;i++){

   arr[0]=0;

   cin>>arr[i];

   min_fuel=max(min_fuel,(arr[i]-arr[i-1]));

  }

  min_fuel=max(min_fuel,2*(x-arr[n]));

  cout<<min_fuel<<endl;

}

}