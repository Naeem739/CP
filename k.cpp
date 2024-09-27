#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef pair < ll, ll > Pair;
#define endl '\n'
#define Pair pair<ll,ll>
#define all(a)(a).begin(), (a).end()
const ll inf = 1e18 + 123;
const int N = 1e6 + 123;

ll lcm(ll n, ll m ) {
	
       return (n*m)/__gcd(n,m); 
	
}

void answer() {
     
      ll n,m,l,r; 
      cin >> n >> m >> l >> r ; 
      
      if(n /__gcd(n,m) > r/m){
      	 cout << 0 << endl; 
      	 return; 
      }
      
      ll ans = r/lcm(n,m); 
      ans -= (l - 1) / lcm(n,m); 
      

      cout <<ans << '\n'; 
     


     
     
     
     
   
}


int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  ll tt = 1;
//  cin >> tt;

  for (ll i = 1; i <= tt; i++) {
    answer();
  }

  return 0;
}
