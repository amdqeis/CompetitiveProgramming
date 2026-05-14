#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
const int MAX = 400000;

long long fact[MAX], invFact[MAX];

long long modPow(long long a, long long b) {
    long long res = 1;
    while (b) {
        if (b & 1) res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}

long long comb(int n, int r) {
    if (r < 0 || r > n) return 0;
    return fact[n] * invFact[r] % MOD * invFact[n - r] % MOD;
}

bool valid(int x, int y) {
    int A = 2*y - x;
    int B = 2*x - y;
    if (A % 3 != 0 || B % 3 != 0) return false;
    A /= 3;
    B /= 3;
    return (A >= 0 && B >= 0);
}

long long ways(int x, int y) {
    int A = (2*y - x) / 3;
    int B = (2*x - y) / 3;
    return comb(A + B, A);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, M, K;
    cin >> N >> M >> K;

    vector<pair<int,int>> p(K);
    for (int i = 0; i < K; i++) {
        cin >> p[i].first >> p[i].second;
    }

    p.push_back({N, M});
    sort(p.begin(), p.end());

    // precompute factorial
    fact[0] = 1;
    for (int i = 1; i < MAX; i++) fact[i] = fact[i-1] * i % MOD;
    invFact[MAX-1] = modPow(fact[MAX-1], MOD-2);
    for (int i = MAX-2; i >= 0; i--) invFact[i] = invFact[i+1] * (i+1) % MOD;

    vector<long long> dp(p.size());

    for (int i = 0; i < p.size(); i++) {
        int x = p[i].first;
        int y = p[i].second;

        if (!valid(x, y)) {
            dp[i] = 0;
            continue;
        }

        dp[i] = ways(x, y);

        for (int j = 0; j < i; j++) {
            int x2 = p[j].first;
            int y2 = p[j].second;

            int dx = x - x2;
            int dy = y - y2;

            if (dx < 0 || dy < 0) continue;
            if (!valid(dx, dy)) continue;

            long long w = ways(dx, dy);
            dp[i] = (dp[i] - dp[j] * w % MOD + MOD) % MOD;
        }
    }

    cout << dp.back() << "\n";
}