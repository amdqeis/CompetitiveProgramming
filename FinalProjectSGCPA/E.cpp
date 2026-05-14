#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);
typedef long long ll;

void solve() {
    ll n, q, l, r, x;
    ll inp;
    ll total;
    
    cin >> n;
    vector<vector<ll>> v(n+1);
    for (ll i=0; i<n; i++){
        cin >> inp;
        v[inp].push_back(i);
    }
    cin >> q;

    while (q--){
        cin >> l >> r >> x;
        cout << lower_bound(v[x].begin(), v[x].end(), r) - lower_bound(v[x].begin(), v[x].end(), l - 1) << endl;;
    }
}

int main() {
    fastio();
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}