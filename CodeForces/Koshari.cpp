// https://codeforces.com/problemset/problem/2227/A
//
// Idea -> Mod both number by 2, and check if x and y are 1, if its then its not possible

#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);
typedef long long ll;

void solve() {
    int n; cin >> n;
    int x, y;

    while (n--){
        cin >> x >> y;
        if (x%2 == 1 && y%2 == 1){
            cout << "NO" << endl;
        } else{
            cout << "YES" << endl;
        }
    }
}

int main() {
    fastio();
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}