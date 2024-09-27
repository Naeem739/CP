#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int a[] = {1, 2, 3, 4, 5, 6};  
ll dp [1000006];  

ll fun(ll sum, ll n ) {
	
   if (n == 0)return 0;
   if(sum == 0 )return 1; 
   if(sum <0)return 0; 
    
    ll ans = 0;
    
    if(dp[sum] != -1) return dp[sum]; 
    
    
    ans = fun(n,sum - a[n- 1 ]) + fun(n-1, sum ); 
    return dp[sum ] = ans % 1000000007;
}

int main() {
    int sum;
    cin >> sum;
    
    memset(dp,-1,sizeof(dp)); 

    cout << dp [ sum ]<< endl;
}
