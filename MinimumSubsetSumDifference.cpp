#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll n, totalSum = 0;
ll a[100007];
ll dp[207][200000];

ll fun(ll sum, ll i) {
    
    if (i == 0) {
        return abs(totalSum - 2 * sum);
    }

   
    if (dp[i][sum] != -1) return dp[i][sum];

   
    ll include = fun(sum + a[i - 1], i - 1);
    ll exclude = fun(sum, i - 1);

    
    return dp[i][sum] = min(include, exclude);
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        totalSum += a[i];
    }
    memset(dp, -1, sizeof(dp));

   
    cout << fun(0, n);
}
