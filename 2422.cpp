#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<ll, ll> Pair;
#define endl '\n'
#define all(a) (a).begin(), (a).end()
const int mod = 1e9 + 7; 
void answer();

ll power(ll x, ll y ){
	 ll ans = 1; 
	 while(y){
	 	if(y & 1) ans = ans * x % mod ; 
	      x = x * x % mod; 
	 	y >>= 1; 
	 }
	 return ans; 
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll tt = 1;
    //cin >> tt;

    for (ll i = 1; i <= tt; i++) {
        answer();
    }

    return 0;
}

void answer() {
    
      
      // Calculate (a/b)%mod; 
/*
      There are No Direct formula to calculate it; 
      but we have (a * b^-1) % mod = ( (a%mod) * (b^-1 % mod )) % mod; 
      
      step 1; Calculte b^-1; using Farmat little Theorem; 
              b^-1 = ( b^(mod-2) ) under the mod; 
      step 2: then calculte ( (a%mod) * (b^-1 % mod )) % mod; 
*/

     ll a,b; 
     cin >> a >> b; 
     ll b_inverse  = power(b,mod - 2 ); 
     ll ans = ( (a%mod) * (b_inverse % mod )) % mod; 
     cout << ans << endl; 
      
}



