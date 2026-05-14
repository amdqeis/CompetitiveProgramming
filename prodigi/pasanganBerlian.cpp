#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);
typedef long long ll;

void solve() {
    ll n, m, x;
    cin >> n >> m >> x;

    while (true){
        if (x > m){
            cout << "Tidak";
            break;
        }

        if (n == 0){
            cout << "Tidak";
            break;
        }

        if ((m - x) % n == 0){
            cout << "Iya";
            break;
        }

        m = m % n;
        if (m < n) swap(m, n);
    }
}

int main() {
    fastio();
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}