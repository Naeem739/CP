#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<ll, ll> Pair;
#define endl '\n'
#define all(a) (a).begin(), (a).end()
const int mod = 1e9 + 7; 
const int N = 1e6; 
vector<ll>Fact(N+ 123,1); 
 
void answer();

ll power(ll x, ll y ){
	 ll ans = 1; 
	 while(y){
	 	if(y & 1) ans = ans * x % mod; 
	      x = x * x % mod ; 
	 	y >>= 1; 
	 }
	 return ans; 
}
void pre(){
	 for(int i = 2;i<=N;i++) Fact[ i ] = Fact[i-1] *i % mod; 
}
ll nCr(ll n, ll r ){
	ll tm = r; 
	return Fact[n]*power( tm, mod - 2 ) % mod;  
}
ll nPr(ll n, ll r ){
	return Fact[n]*power( Fact[n-r], mod - 2 ) % mod;  
}


int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll tt = 1;pre();
    //cin >> tt;

    for (ll i = 1; i <= tt; i++) {
        answer();
    }

    return 0;
}

void answer() {
	
	string s; cin >> s; 
	map<char,ll>cnt; 
	ll n = s.size(); 
	for(auto u:s)cnt[u]++; 
	ll ans = 1; 
	for(auto [ x, y ]:cnt)ans = ans * Fact[y] % mod; 
	cout << nCr(n,ans) << endl; 
	
	
	
     
}


