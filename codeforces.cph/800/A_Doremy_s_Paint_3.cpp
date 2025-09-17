#include <bits/stdc++.h>

using namespace std;

void solution()

{

    int n;
    cin >> n;

    map<int, int> mp;
    // key , value 

    //  2 = first ==== 3 =second 
    //  1 = first ==== 10 = second 
    for (int i = 0; i < n; i++)

    {

        int val;

        cin >> val;

        mp[val]++;

    }
// vector a 
// sort ( a.begin(),a.end())

    if (mp.size() >= 3)

        cout << "No" << '\n';

    else

    {

        (abs(mp.begin()->second - mp.rbegin()->second) <= 1) ? cout << "Yes" << '\n' : cout << "No" << '\n';

    }

}

int main()

{

    ios::sync_with_stdio(false);

    cin.tie(nullptr);

    int t;

    cin >> t;

    while (t--)

    {

        solution();

    }

    return 0;

}
