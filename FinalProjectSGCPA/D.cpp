#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);
typedef long long ll;

int main() {
    fastio();
    int x = 45;
    string num;
    cin >> num;

    for (int i=0; i<9; i++) x -= (num[i] - '0');
    cout << x;
    return 0;
}