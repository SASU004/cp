#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solution() {
    int size;
    cin >> size;

    vector<int> result(2 * size + 1, 0);       
    vector<bool> isFilled(2 * size + 1, false);

    int rightMost = 2 * size; 

    for (int num = size; num >= 1; num--) {
        while (rightMost > 0 && isFilled[rightMost]) 
            rightMost--;
        
        int posRight = rightMost; 
        int step = num;

        while (true) {
            int posLeft = posRight - step; 

            if (posLeft > 0 && !isFilled[posLeft]) {
                result[posLeft] = num;
                result[posRight] = num;
                isFilled[posLeft] = isFilled[posRight] = true;
                break;
            }
            step += num; 
        }
    }

    
    for (int i = 1; i <= 2 * size; i++) {
        cout << result[i] << (i == 2 * size ? '\n' : ' ');
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCases = 1;
    cin >> testCases;

    while (testCases--) {
        solution();
    }
    return 0;
}
