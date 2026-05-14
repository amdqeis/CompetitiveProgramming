#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);
typedef long long ll;

string solve() {
    int x, y; cin >>x >> y;
    return x>=y ? "YES" : "NO";
}

int main() {
    fastio();
    int t = 1;
    // cin >> t;
    while (t--) cout << solve();
    return 0;
}