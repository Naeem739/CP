#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<ll, ll> Pair;
#define endl '\n'
#define all(a) (a).begin(), (a).end() 
void answer();
ll BN(ll a,ll b, ll mod ){
     ll ans = 1; 
     while(b){
     	   if(b & 1 ){
     	   	ans = 1LL*(( __int128)ans * a) % mod; 
     	   }
     	   a = (__int128)a * a % mod ; 
     	   b >>= 1; 
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
    
     ll b,p,m; 
     cin >> b >> p >> m ; 
     	    cout << BN(b,p,m)<<endl; 
     
    
}



