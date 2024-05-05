#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<ll, ll> Pair;
#define endl '\n'
#define ull unsigned long long 
#define all(a) (a).begin(), (a).end() 
void answer();
ull mulmod(ull a, ull b , __int128 mod ){
	ull ans = 0; 
	while(b){
		 if(b&1)ans = ((__int128)ans + a) % mod; 
		 a = ((__int128)a + a) % mod; 
		 b >>= 1; 
		  
	}
	return ans; 
}
ull BN(ull a,ull b, __int128 mod ){
     ull ans = 1; 
     while(b){
     	   if(b & 1 ){
     	   	ans = mulmod(ans,a,mod); 
     	   }
     	   a = mulmod(a,a,mod); 
     	   
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
    
     ull b,p; 
     string s; 
     cin >> b >> p >> s; 
     __int128 mod = 0;
     for(auto u: s ){
     	    mod = mod * 10 + (u-'0'); 
     }
     cout <<BN(b,p,mod)<<endl; 
     
    
}