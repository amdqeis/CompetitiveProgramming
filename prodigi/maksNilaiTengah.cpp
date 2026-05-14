#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);
typedef long long ll;

void solve() {
}

int main() {
    fastio();
    int n, s;
    cin >> n >> s;


    int nLeft = (n-1) / 2;
    int nRight = n - nLeft;
    
    cout << (s - nLeft) / nRight;
    return 0;
}