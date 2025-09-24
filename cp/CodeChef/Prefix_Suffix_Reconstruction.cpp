// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int T;
//     cin >> T;
//     while (T--) {
//         int N;
//         cin >> N;
//         vector<int> F(N);
//         for (int i = 0; i < N; i++) cin >> F[i];

//         // Check if F[0] >= N (F[1] in problem statement, since 1-indexed)
//         if (F[0] < N) {
//             cout << -1 << "\n";
//             continue;
//         }

//         vector<int> A(N);
        
//         // Key insight: Since F[1] >= N, value 1 must appear in all suffix minimum positions
//         // This means A[N-1] = 1, and 1 appears in suffix minimum for all positions
        
//         // Start by placing 1 at the end
//         A[N-1] = 1;
//         F[0] -= N; // Remove N occurrences of 1 from suffix minimum
        
//         // Now we need to construct the remaining array
//         // We'll use a greedy approach: place the largest possible value at each position
//         // while maintaining the constraint that frequencies must match
        
//         vector<int> remaining = F;
//         bool possible = true;
        
//         // Fill from right to left
//         for (int i = N-2; i >= 0; i--) {
//             bool found = false;
            
//             // Try placing values from largest to smallest
//             for (int val = N; val >= 1; val--) {
//                 if (remaining[val-1] > 0) {
//                     A[i] = val;
//                     remaining[val-1]--;
                    
//                     // Check if this placement leads to a valid solution
//                     // We need to verify that remaining frequencies can form valid arrays
                    
//                     // Create temporary arrays to check validity
//                     vector<int> temp_P(N), temp_S(N);
//                     temp_P[0] = A[0];
//                     for (int j = 1; j <= i; j++) {
//                         temp_P[j] = max(temp_P[j-1], A[j]);
//                     }
                    
//                     temp_S[N-1] = A[N-1];
//                     for (int j = N-2; j >= i; j--) {
//                         temp_S[j] = min(temp_S[j+1], A[j]);
//                     }
                    
//                     // Check if we can complete the arrays with remaining frequencies
//                     vector<int> temp_freq(N, 0);
//                     for (int j = 0; j <= i; j++) {
//                         temp_freq[temp_P[j]-1]++;
//                     }
//                     for (int j = i; j < N; j++) {
//                         temp_freq[temp_S[j]-1]++;
//                     }
                    
//                     // Check if remaining frequencies are sufficient
//                     bool valid = true;
//                     for (int j = 0; j < N; j++) {
//                         if (temp_freq[j] > remaining[j]) {
//                             valid = false;
//                             break;
//                         }
//                     }
                    
//                     if (valid) {
//                         found = true;
//                         break;
//                     } else {
//                         remaining[val-1]++;
//                     }
//                 }
//             }
            
//             if (!found) {
//                 possible = false;
//                 break;
//             }
//         }
        
//         if (!possible) {
//             cout << -1 << "\n";
//         } else {
//             // Final verification
//             vector<int> P(N), S(N);
//             P[0] = A[0];
//             for (int i = 1; i < N; i++) {
//                 P[i] = max(P[i-1], A[i]);
//             }
            
//             S[N-1] = A[N-1];
//             for (int i = N-2; i >= 0; i--) {
//                 S[i] = min(S[i+1], A[i]);
//             }
            
//             vector<int> check_F(N, 0);
//             for (int i = 0; i < N; i++) {
//                 check_F[P[i]-1]++;
//                 check_F[S[i]-1]++;
//             }
            
//             bool matches = true;
//             for (int i = 0; i < N; i++) {
//                 if (check_F[i] != F[i]) {
//                     matches = false;
//                     break;
//                 }
//             }
            
//             if (!matches) {
//                 cout << -1 << "\n";
//             } else {
//                 for (int i = 0; i < N; i++) {
//                     cout << A[i] << (i == N - 1 ? "\n" : " ");
//                 }
//             }
//         }
//     }

//     return 0;
// }
