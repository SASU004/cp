#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solution() {
    int n;
    cin >> n ;
 string  s ;
   cin >> s;
   //

//    ...
//    2 op 1 

//    .#.

//    2 op 1 

//     no of empty == no of op 1 
//    op 1 = 0  
//    char at s of i jodi . at n + 1 >> boundary in {n} >> jodi . s at 2 >> s at 2 boundary in >> out 2 
//      . at 0 . at 1 . at 2 
//  extra == no of empty space >> no of .
//    ... 
//    op 1 ++
bool found_triple = false;
int no_of_empty= 0;
for ( int i =0 ;i<n; i++){
    if ( s[i]=='.'&& i+1<n && s[i+1]=='.' && i+2<n && s[i+2]=='.' ){
        found_triple=true;
        break;
    }
    if (s[i]=='.' ){
         no_of_empty++;
}

}
if (found_triple){
    cout<<2<<endl;
}
else{ cout<< no_of_empty<<endl;}
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
