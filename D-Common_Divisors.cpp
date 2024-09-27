#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef pair < ll, ll > Pair;
#define endl '\n'
#define Pair pair<ll,ll>
#define all(a)(a).begin(), (a).end()
const ll inf = 1e18 + 123;
const int N = 1e6 + 123;

int number_of_divisors(ll n ){
	 ll x = 0; 
	 for(int i = 1; 1LL*i * i <= n; i++ ) {
	 	 if( n % i == 0 ) {
	 	 	 if (n/ i != i )x += 2; 
	 	 	 else x ++; 
	 	 }
	 }
	 return x ; 
	 
}

void answer() {
	
	
	 int n; cin >> n; 
	 ll a[ n ]; 
	 for(auto &u: a )cin >> u; 
	 ll gcd = 0; 
	 
	 for(auto u: a )gcd = __gcd(gcd, u ); 
	 
	 cout << number_of_divisors(gcd) << endl; 
	
	
     
     
     
     
     
   
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
