#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef pair < ll, ll > Pair;
#define endl '\n'
#define Pair pair<ll,ll>
#define all(a)(a).begin(), (a).end()
const ll inf = 1e18 + 123;
const int N = 1e6 + 123;
int cs = 0; 

void answer() {
     
     
       int n,m; cin >> n >> m; 
       
       int ans = 0,cnt = 0 ; 
       while (true) {
       	 ans =( ans * 10 + m) % n; 
       	 cnt++; 
       	 if(ans == 0 )break; 
       	 
       }
       
       cout << "Case " << ++cs << ": " << cnt << endl; 
     
     
     
     
   
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
