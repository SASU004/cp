#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solution() {
int a,b,c,d;
cin>>a>>b>>c>>d;
  {

     bool half_1=(a<=2*b+2)&&(b<=2*a+2);
    int half2_c=c-a,half2_d=d-b;
     bool half_2=(half2_c<=2*half2_d+2)&&(half2_d<=2*half2_c+2);
     if(half_1&&half_2)cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
    
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
