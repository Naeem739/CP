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
     
     int n,a,b,c; 
     cin >> n >> a >> b >> c; 
     
     vector<ll>v; 
     
     for (int i = 1; i * i <= n; i ++ ) {
     	    if (n % i == 0 ){
     	    	 v.push_back(i); 
     	    	 if(i != n/i )v.push_back(n/i); 
     	    }
     }
     sort(all(v)); 
     vector<ll>f,s; 
     unordered_map<ll,ll>cnt; 
     
     for(auto u:v){
     	  if(u<=a)f.push_back(u);
     	  if(u<=b)s.push_back(u);
     	  if(u<=c)cnt[u]= 1; 
     }
     
     vector<ll>tm; 
     
     for(auto u:f){
     	   for(auto v:s) tm.push_back(u * v ); 
     }
     
     
     ll ans(0); 
     
     for(auto u:tm){
     	  if(n % u == 0 ){
     	  	 if(cnt[n/u])ans++; 
     	  } 
     }
     
     cout << ans << endl; 
    
     
     
     
   
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
