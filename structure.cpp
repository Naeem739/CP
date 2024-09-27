#include <bits/stdc++.h>

using namespace std;

typedef long long int  ll;
typedef pair < ll, ll > Pair;
#define endl '\n'
#define Pair pair<ll,ll>
#define all(a)(a).begin(), (a).end()
const ll inf = 1e18 + 123;
const int N = 1e6 + 123;
const int mod = 998244353; 


void answer() {
     
     ll n,k;
     
     cin >> n >> k; 
     if(k == 1 ){
     	  cout << 0 << endl; 
     	  return; 
     }
     
     n = n % mod; 
     k = k % mod; 
     ll total = n * k; 
     ll valid = total - n; 
     
     ll tm =(((valid - n ) % mod + mod )% mod ) * n % mod;
     
     
     ll ans = ((n *(n+1))/2) % mod;

     ans  = (ans + tm) % mod; 
     
     cout << ans << endl;   
    

     

}


int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  ll tt = 1;
  //cin >> tt;

  for (ll i = 1; i <= tt; i++) {
    answer();
  }

  return 0;
}
