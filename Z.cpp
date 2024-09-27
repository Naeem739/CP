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

int sq(int n ){
	int x = 1; 
	while(1){
		if(1LL*x*x > n )break; 
		x++; 
	} 
	return x - 1; 
	
} 

void spf_gen(){
	
     for (int i = 1; i <N; i++ ) spf [ i ] = i; 
      
      for (int i = 2; i * i <N; i ++ ){
      	if(spf[i] == i ){ // when i is Prime; 
      	    for (int j = i*i; j<N; j+= i ) {
      			 spf [ j ] = min (spf[j], i ); 
      		}
      	}
      }
      
      
     // for( int i = 1;i<1000;i++)cout << spf[i]<<endl;       
      
}



void answer() {
	
     ll n; cin >> n; 
     
     unordered_map<ll,ll>cnt; 
     int it = 0; 
     
     while(n>1){
     	   ll k = spf[n]; 
     	   cnt[k]++; 
     	   n /= k; 
     	   it++; 
     	   
     }
     cout << it << endl; 
     
     
     
}


int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  ll tt = 1;spf_gen(); 
  //cin >> tt;

  for (ll i = 1; i <= tt; i++) {
    answer();
  }

  return 0;
}
