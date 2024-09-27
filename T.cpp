#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef pair < ll, ll > Pair;
#define endl '\n'
#define Pair pair<ll,ll>
#define all(a)(a).begin(), (a).end()
const ll inf = 1e18 + 123;
const int N = 1e7 + 12;
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

bool is_prime(int n ) {
	 return (spf[(abs(n))] == n); 
}

void answer() {
     
      spfgen(); 
      
      vector<int>v; 
      
      for( int i = 2; i<= N; i++ ) {
      	 if(spf[i] == i )v.push_back(i); 
      }
      
      int tc; cin >> tc; 
      
      for ( int k = 1; k<= tc; k ++ ) {
      	 int n; cin >> n; 
     		 int ans = 0; 
      
       	 for(auto u: v ){
          		 int a = u, b = n - a; 
          		// cout << a <<' ' << b << endl; 
           		if( is_prime(b) and a<=b ) ans++ ;
            }
    
               cout << "Case " << k <<": "<< ans << '\n';  
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
