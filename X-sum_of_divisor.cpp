#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef pair < ll, ll > Pair;
#define endl '\n'
#define Pair pair<ll,ll>
#define all(a)(a).begin(), (a).end()
const ll inf = 1e18 + 123;
const int N = 6e5+ 123;
//vector<ll>cnt(N + 123,0); 
ll cnt[N+123]; 

void harmonic(){
	for (int i = 1; i<N;i++) {
		 for (int j = i; j<=N;j+= i ) cnt[j] += i; 
	}
}

void answer() {
	
     
     int n; cin >> n; 
     
     cout << cnt [ n ] - n << endl; 

  
     
     
     
   
}


int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  ll tt = 1;
  harmonic(); 
  cin >> tt;

  for (ll i = 1; i <= tt; i++) {
    answer();
  }

  return 0;
}
