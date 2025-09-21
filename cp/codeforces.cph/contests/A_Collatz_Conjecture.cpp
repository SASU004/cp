#include <iostream>

void solution() {
    int k, x;
    std::cin >> k >> x;

    for (int i = 0; i < k; ++i) {
        // Check for the reverse of the odd case (3x+1)
        if ((x - 1) % 3 == 0) {
            int candidate = (x - 1) / 3;
            // The previous number must have been odd for the 3x+1 rule to apply
            if (candidate > 0 && candidate % 2 != 0) {
                x = candidate;
                continue; 
            }
        }
        
        // If the odd case is not possible, the previous number must have been 2x
        x = x * 2;
    }
    std::cout << x << std::endl;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int T;
    std::cin >> T;
    while (T--) {
        solution();
    }
    return 0;
}