#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);
typedef long long ll;

void solve() {
    ll res = 0;
    ll temp = 0;
    int N; cin >> N;


    int arr[N+1];
    int prefixSum[N+1];
    for (int i=1; i<=N; i++) cin >> arr[i]; // inp

    for (int i=2; i<=N; i++) res += (i-1) * (pow(arr[i], 2)); // Ai^2 TRUE

    for (int i=1; i<N; i++){ // Aj^2 True
        temp += pow(arr[i], 2);
        res += temp;
    }
    temp = 0;
    for (int i=1; i<N; i++){ // AjAi True
        temp += arr[i];
        res -= 2 * arr[i+1] * temp;
    }


    cout << res;
}

int main() {
    fastio();
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}


// N-1 * 