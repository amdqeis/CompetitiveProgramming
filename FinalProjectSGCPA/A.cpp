#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);
typedef long long ll;

void solve() {
    int mx = 1, x = 1;
    string txt;
    cin >> txt;


    for (int i = 1; i<txt.length(); i++){
        if (txt[i] == txt[i-1]){
            x++;
        } else{
            mx = max(mx ,x);
            x=1;
        }
    }
    mx = max(mx, x);
    cout << mx;
}

int main() {
    fastio();
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}
