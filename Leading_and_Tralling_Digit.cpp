#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<ll, ll> Pair;
#define endl '\n'
#define all(a) (a).begin(), (a).end()
const int mod = 1000; 
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
string format(ll x ){
	 string s = to_string (x ); 
	 while(s.size()<3){
	 	 s.insert(s.begin(),'0'); 
	 }
	 return s; 
}

void answer() {
    
      ll a,b; 
      cin >> a >> b; 
      ll last = power(a,b); 
      
      // For First 3 digit; 
      
      double x = (double)(b*(log10(a))); 
      double need = x - floor(x); 
      double pp = pow(10,need);
      cout << format(floor(pp * 100)) <<"..."<<format(last)<<"\n"; 
       
      /*
           x = n^k; 
           log10(x) = log10(n*k); 
           log10(x) = k * log10(n); 
           x = 10 ^ k*log10(n);
      
      
      */
      
}
