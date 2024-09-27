#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef pair < ll, ll > Pair;
#define endl '\n'
#define Pair pair<ll,ll>
#define all(a)(a).begin(), (a).end()
const ll inf = 1e18 + 123;
const int N = 1e6 + 123;

int spf[N + 123]; 

void spf_gen() {
	
	for(int i = 1;i<=N;i++)spf[i] = i; 
	
	for(int i = 2; i*i <=N; i++){
		 if(spf[i] == i ) {
		 	 for (int  j = i*i; j<=N; j+=i) spf[j]  = min(spf[j],i); 
		 	 
		 }
	}
	
}
bool is_prime(int n ) {
	 return (spf[n] == n ); 
}


void answer() {
	
	spf_gen(); 
	
      ll   p,n; cin >> p; 
	
	while(p--) {
		cin >> n; 
		ll sq = sqrt(n); 
		while(sq * sq< n )++sq; 
		while(sq * sq >n )--sq; 
		if(sq * sq != n )cout <<"NO\n"; 
		else if(is_prime(sq))cout <<"YES\n"; 
		else cout <<"NO\n"; 
		
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
