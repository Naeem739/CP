#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef pair < ll, ll > Pair;
#define endl '\n'
#define Pair pair<ll,ll>
#define all(a) (a).begin(), (a).end()
const ll inf = 1e18 + 123;
const int N = 1e6 + 123;
ll total_divisior_of_three(ll p ){
      ll ans = 0 ; 
      while(p){
          ans++; 
          p/=3; 
      }
      return ans; 
}
void answer() {
     
      ll n,m; cin >> n >> m; 
      ll ans = total_divisior_of_three(n); 
      ll x = n + 1; 
      for(int i = 0;i<ans;i++)x *= 3; 
      ans += total_divisior_of_three(x); n++; 
      ans += total_divisior_of_three((m *(m + 1 )/2 ) - (n * ( n + 1 )/2)); 
    //  cout << ans << endl; 

    cout << total_divisior_of_three(3360)<<endl; 
   
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
