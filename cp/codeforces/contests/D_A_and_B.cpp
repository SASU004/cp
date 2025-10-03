#include <bits/stdc++.h>
using namespace std;

#define int long long

long long calculate_min_swaps(const string& s, char target_char) {
    vector<int> positions;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == target_char) positions.push_back(i);
    }
    if (positions.size() <= 1) return 0;

    vector<long long> v;
    v.reserve(positions.size());
    for (size_t i = 0; i < positions.size(); ++i) {
        v.push_back(static_cast<long long>(positions[i]) - i);
    }

    long long median_target = v[v.size() / 2];
    long long total_cost = 0;
    for (long long val : v) total_cost += abs(val - median_target);

    return total_cost;
}

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    long long cost_a = calculate_min_swaps(s, 'a');
    long long cost_b = calculate_min_swaps(s, 'b');

    cout << min(cost_a, cost_b) << "\n";
}

signed  main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}
