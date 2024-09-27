#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef pair < ll, ll > Pair;
#define endl '\n'
#define Pair pair<ll,ll>
#define all(a)  a.begin(), a.end()
const ll inf = 100000000000 + 123;
const int N = 1e6 + 123;

void answer() {
     
    
    
    set<ll>st; 
     

    for (ll x = 1; x < inf and x * 2 < inf ; x *=2 ) {
    	   for ( ll y = 1; x * y  < inf ; y *= 3){
    	   	    for (ll z = 1; x * y * z < inf ; z *= 5) {
    	   	    	   if (x * y * z < inf)st.insert(x*y*z); 
    	   	    }
    	   }
    }
     
          
           ll k = 1500; 
           for(auto u:st){
           	   k--; 
           	   if(k == 0) {
           	   	 cout << u << endl;
           	   	 break; 
           	   }
           }
     
     
     
   
}


int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  ll tt = 1;
 // cin >> tt;

  for (ll i = 1; i <= tt; i++) {
    answer();
  }

  return 0;
}
