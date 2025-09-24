#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        string s;
        cin >> s;
        
        set<int> black_cells;
        for (int i = 0; i < m; i++) {
            int a;
            cin >> a;
            black_cells.insert(a);
        }
        
        
        for (int i = 1; i <= n; i++) {
            int current_pos = 1;
            
            for (int j = 0; j < i; j++) {
                if (s[j] == 'A') {
                    current_pos++;
                } else { 
                    current_pos++;
                    while (black_cells.count(current_pos)) {
                        current_pos++;
                    }
                }
            }
          
            black_cells.insert(current_pos);
        }
        
        cout << black_cells.size() << "\n";
        bool first = true;
        for (int cell : black_cells) {
            if (!first) cout << " ";
            cout << cell;
            first = false;
        }
        cout << "\n";
    }
    
    return 0;
}