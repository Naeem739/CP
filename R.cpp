#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef pair < ll, ll > Pair;
#define endl '\n'
#define Pair pair<ll,ll>
#define all(a)(a).begin(), (a).end()
const ll inf = 1e18 + 123;
const int N = 1e6 + 123;
int spf[N+123]; 

void spfgen(){
	
	 for( int i = 1; i<=N;i++) spf[i] = i; 
	 
	 for(int i = 2; i * i <=N; i++ ) {
	 	  if( spf[ i ] == i ) {
	 	  	  for ( int j = i * i; j <=N; j += i ) {
	 	  	  	 spf[j] = min (spf[j], i ); 
	 	  	  }
	 	  }
	 }
}

void answer() {
     
      spfgen(); 
      
      int tc; cin >> tc; 
      for( int k = 1; k<=tc; k ++ ){
      	 int n; cin >> n; 
      
      vector<ll>fact(n + 123); 
      
      for( int i = 2; i<=n;i ++ ) {
      	 ll tm = i; 
      	 while(tm > 1 ) {
      	 	 fact[spf[tm]]++; 
      	 	 tm /= spf[tm ]; 
      	 }
      	 
      }
      
      int last_prime = n; 
      for( int  i = n; i>1;i--){
      	 if(spf[i]==i){
      	 	 last_prime = i; 
      	 	 break; 
      	 }
      }
      
      cout <<"Case " << k <<": " << n << " = "; 
      for(int i = 2; i<=n; i++ ){
      	if(fact[i] == 0 )continue; 
      	cout << i <<" (" << fact[i] <<")"; 
      	if(i==last_prime)continue; 
      	cout <<" * "; 
      	
      }
      cout << endl; 
}
      
      
      
      
     
     
     
     
   
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
