#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<ll, ll> Pair;
#define endl '\n'
#define all(a) (a).begin(), (a).end()
void answer();
const int mod = 1e9 + 7; 

ll power(ll x, ll y ){
	 ll ans = 1; 
	 while(y){
	 	if(y & 1) ans = (__int128)ans * x % mod; 
	      x = (__int128) x * x % mod ; 
	 	y >>= 1; 
	 }
	 return ans; 
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll tt = 1;
    cin >> tt;

    for (ll i = 1; i <= tt; i++) {
        answer();
    }

    return 0;
}

void answer() {
      ll a,b; cin >> a >> b; 
      cout << power(a,b)<<endl; 
      
     
     
   
    
}


