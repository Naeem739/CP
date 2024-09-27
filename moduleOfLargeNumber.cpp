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
     
     ll n,k; cin >> n >> k; 
     ll sz = sqrt(n); 
     
     if(k>2*sz){
     	  cout << -1 << endl; 
     	  return; 
     }
     vector<ll>v; 
     
     
     for (ll i = 1; i*i <= n  ; i++ ) {
     	   if( n % i == 0) {
     	   	v.push_back(i); 
     	   	if(n/i != i) v.push_back(n/i); 
     	   }
     	   
     }
     
     sort(v.begin(),v.end()); 
     
     if(v.size()>=k)cout << v[k-1]<<endl ;
     else 
     cout << -1 << endl; 
     
     
   
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
