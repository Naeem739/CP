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
vector<ll>primes; 

bool ck ( ll x ) {
	
	  bool c = 1; 
	  
	  while(x){
	  	
      	int remainder = x % 10; 
      	
      	if(remainder == 0 ){
      	 	 c = false; 
      	 	 break; 
      	}
      	x /= 10; 
        }
      	 	 
       return c; 
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
      
      for(ll i = 2; i<=N;i++) {
      	 if (spf[i ] == i ) {
      	 	if(ck(i)) { 
      	 		bool all_suffix = 1; 
      	 		int id = 0; string tm1 = to_string(i);
      	 		while(id<tm1.size()) {
      	                  tm1[id++] = '0'; 
      	                  ll  val = stoi(tm1); 
      	                  if(spf[val] != val ) {
      	                  	 all_suffix = 0; 
      	                  	 break; 
      	                  }
      	 		}
      	 		
      	 		if(all_suffix)primes.push_back(i);
      	 		
      	 	}
      	 }
      }
      
      
     // for( int i = 1;i<1000;i++)cout << spf[i]<<endl;       
      
}

void answer() {
	
	 int n; cin >> n; 
	 
	 ll ans = upper_bound(primes.begin(),primes.end(),n) - primes.begin(); 
	 
	 cout << ans << endl; 
	
	
	 
	 
	
	
     
}


int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  ll tt = 1;
  spf_gen();
  cin >> tt;

  for (ll i = 1; i <= tt; i++) {
    answer();
  }

  return 0;
}
