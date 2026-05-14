#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);
typedef long long ll;

void solve() {
    int n, x;
    cin >> n;

    vector<ll> A(n+1);
    for (int i=1; i<=n; i++) cin >> A[i];

    unordered_map<ll, ll> cnt;

    ll ans = 0;

    for (int j=1; j<=n; j++){
        ll target;
        target = j - A[j];
        if (cnt.count(target)){
            ans+= cnt[target];
        }

        ll val = j + A[j];
        cnt[val]++;
    }

    cout << ans;

}

int main() {
    fastio();
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}