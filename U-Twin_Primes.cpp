#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef pair < ll, ll > Pair;
#define endl '\n'
#define Pair pair<ll,ll>
#define all(a)(a).begin(), (a).end()
const ll inf = 1e18 + 123;
const int N = 2e7 + 123;
int spf[N + 123]; 
vector<ll>primes; 

void spf_gen(){
	
	for (int i = 1; i <N; i++ ) spf [ i ] = i; 
      
      for (int i = 2; i * i <N; i ++ ){
      	
      	if(spf[i] == i ){ // when i is Prime; 
      	
      		for (int j = i*i; j<N; j+= i ) {
      			
      			 spf [ j ] = min (spf[j], i ); 
      		}
      	}
      }
      
      
    
	 
	 for(int i = 2; i<=N; i++ ) {
	 	if(spf[i] == i )primes.push_back(i); 
	 }
      
      
     // for( int i = 1;i<1000;i++)cout << spf[i]<<endl;       
      
}

void answer() {
	
	
	 spf_gen(); 
	 
	 
	 
	 
	 
	 vector<pair<ll,ll>>list; 
	 
	 for(int i = 0; i<primes.size() - 1 ; i++ ) {
	     ll first = primes[i]; 
	     ll second = primes[i + 1 ]; 
	     if(second - first == 2)list.push_back({primes[i],primes[i+1]});
	      
	 }
	 
	 int n; 
	 
	 while(cin >> n) {
	 	  cout << "(" << list[n-1].first <<", " << list[n-1].second <<  ")" << endl; 
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
