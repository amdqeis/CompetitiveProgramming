#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);
typedef long long ll;

void solve() {
    ll N; cin >> N;
    
    for (ll n=1; n<=N; n++) cout << ((n * n) * ((n*n) - 1)) / 2 - 4 *(n-1) * (n-2) << endl;
}

int main() {
    fastio();
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}