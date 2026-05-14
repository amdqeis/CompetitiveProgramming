#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);
typedef long long ll;

int main() {
    fastio()
    ll N;
    cin >> N;

    vector<ll> dp(N+1, 1e9);
    dp[0] = 0;

    for (int i=1; i<=N; i++){
        ll temp = i;

        while (temp){
            ll digit = temp % 10;
            dp[i] = min(dp[i], dp[i-digit]+1);
            temp = temp/10;
        }
    }
    cout << dp[N];
    return 0;
}