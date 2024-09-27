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
     
     ll n; cin >> n;
     
     ll k = n / 2; 
     
     cout << k << endl; k --; 
     while(k--)cout << 2 << ' '; 
     if(n%2)cout << 3 << endl; 
     else cout << 2 << endl; 
     
     
     
     
   
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
