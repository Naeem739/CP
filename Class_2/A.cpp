
#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef pair < ll, ll > Pair;
#define endl '\n'
#define Pair pair<ll,ll>
#define all(a)(a).begin(), (a).end()
const ll inf = 1e18 + 123;
const int N = 1e6 + 123;

void answer() {
     
    int n,x; cin >> n ; 
    
    ll sum (0); 
    
    for( int i = 0; i<n;i++ ) {
    	   cin >> x; 
    	   while(x) {
    	   	 sum += (x % 10); 
    	   	 x /= 10; 
    	   }
    }
     
    if ( sum % 3 == 0 ) cout << "Yes\n"; 
    else cout << "No\n"; 
     
     
   
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
