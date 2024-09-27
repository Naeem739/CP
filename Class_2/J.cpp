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
     
      ll w; cin >> w; 
      cout << "Case " << ++Cs << ": "; 
      
      if( w % 2 )cout <<"Impossible\n"; 
      else{
        ll m = 1; 
        while ( w % 2 == 0 ) {
                w/=2; m *=2; 
          }
          cout << w <<' ' << m << endl; 
            
      }
     
     
     
   
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
