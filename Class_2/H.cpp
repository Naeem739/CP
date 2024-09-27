#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef pair < ll, ll > Pair;
#define endl '\n'
#define Pair pair<ll,ll>
#define all(a)(a).begin(), (a).end()
const ll inf = 1e18 + 123;
const int N = 1e6 + 123;
ll lcm (ll a, ll b ) {
	 return (a * b) / __gcd( a, b ); 
}

void answer() {
	
	ll n; cin >> n; 
	ll a = inf, b = inf;  
	
	for (ll i = 1; 1LL * i * i <= n; i++ ) {
	     if ( n % i == 0 ) {
	     	    if(__gcd(i,n/i) == 1 and max(i,n/i) < max(a,b)) {
	     	    	 a = i, b = n / i; 
	     	    }
	     }
	} 
      

      cout << a << ' ' << b << '\n'; 
      
     
     
     
   
}


int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  ll tt = 1;
  cin >> tt;

  for (ll i = 1; i <= tt; i++) {
    answer();
  }

  return 0;
}
