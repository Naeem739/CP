#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef pair < ll, ll > Pair;
#define endl '\n'
#define Pair pair<ll,ll>
#define all(a)(a).begin(), (a).end()
const ll inf = 1e18 + 123;
const int N = 1e6 + 123;

void answer();

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

void answer() {
     ll n,s; 
     cin >> n >> s; 
     ll a [ n ],b[n];
     for( auto &u: a ) cin >> u; 
     for (int i = 0; i < n; i++ ) b [ i ] =  a[ i ]; 
     for (int i = 1;i<n;i++)b[i] += b[ i - 1]; 
     
     ll sum = 0, ans = 0, i = 0, j = 0 ,x = 0; 
     
     while ( j < n ) {
     	      sum += a[j++]; 
     	      if(sum >= s ){
     	         ll add = upper_bound(b,b+n,sum - s ) - b; 
     	         ans += (add + 1 ); 
     	      
     	      }
     }
     
     cout << ans << endl; 
}