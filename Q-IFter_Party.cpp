#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef pair < ll, ll > Pair;
#define endl '\n'
#define Pair pair<ll,ll>
#define all(a)(a).begin(), (a).end()
const ll inf = 1e18 + 123;
const int N = 1e6 + 123;
int Cs = 0; 

void answer() {
     
     ll piyaju, left ; 
     cin >> piyaju >> left; 
     
     ll n  = piyaju - left; 
     
     vector<ll>ans; 
     
     for (int i = 1;1LL*i * i <= n; i ++ ) {
     	   if(n % i == 0 ){
     	   	ll x = n / i ; 
     	   	if(i > left )ans.push_back(i); 
     	   	if(i != n / i and n/i > left )ans.push_back(n/i); 
     	   }
     }
     
     cout <<"Case " << ++ Cs <<": "; 
     
     sort(ans.begin(),ans.end()); 
     
     if (ans.size() != 0 ){
     	  for(auto u:ans)cout << u << " "; 
     	  cout << endl; 
     }
     else cout << "impossible\n"; 
     
     
     
     
     
   
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
