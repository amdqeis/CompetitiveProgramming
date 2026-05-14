#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio();

    int N, K;
    cin >> N >> K;

    vector<int> A(N);
    unordered_map<int,int> freq;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
        freq[A[i]]++;
    }

    vector<int> contrib;

    for (auto &[val, f] : freq) {
        if (f > 1) {
            contrib.push_back(f - 1);
        }
    }

    sort(contrib.rbegin(), contrib.rend());

    long long ans = 0;
    for (int i = 0; i < min(K, (int)contrib.size()); i++) {
        ans += contrib[i];
    }

    cout << ans << "\n";
    return 0;
}