#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1; 
    // cin >> T; // uncomment if multiple test cases
    while (T--) {
        // solve here
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++) {
            cin>>arr[i];
    }sort(arr.begin(), arr.end());
        for(int i=0;i<n;i++) {
            cout<<arr[i]<<" ";
        }
        cout<<"\n";

    return 0;
}
}