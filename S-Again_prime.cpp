#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef pair < ll, ll > Pair;
#define endl '\n'
#define Pair pair<ll,ll>
#define all(a)(a).begin(), (a).end()
const ll inf = 1e18 + 123;
const int N = 1e5 + 123;
int spf[N + 123]; 
int  cs = 0;
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

bool is_prime(int n ) {
	 return (spf[(abs(n))] == n); 
}

void answer() {
	
	 auto st = clock();
	
	 spf_gen(); 
	
	
	 ll m,nn; cin >> m >> nn; 
	 unordered_map<int,int> fact; 
	 
	 for(int i = 2 ; i<=nn; i++ ){
	 	int n = i; 
		 while (n > 1 ) {
	 	   fact [ spf[n]]++; 
	 	   n /= spf[n]; 
		 }
	 }
	 
	
	 
	// for(auto [x,y]: fact )cout << x << ' ' << y << endl; 
	 
	 unordered_map<int,int>cnt; 
	 
	 while(m > 1 ) {
	 	cnt[spf[m]]++; 
	 	m /= spf[m]; 
	 }
	 
	 int ans = 1e9; 
	 
	 for (auto [x,y]:cnt) {
	 	int val = fact[x]/y; 
	 	ans = min (val,ans); 
	 }
	 
	 cout <<  "Case " << ++cs <<":\n"; 
	 if(ans == 0 )cout <<"Impossible to divide\n"; 
	 else cout << ans << endl; 
	 
	 
     
     
//      cout << 1.00 * (((clock()) - st) )/CLOCKS_PER_SEC<< endl;  
	 
	 
	
	
     
}


int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int  tt = 1;
  cin >> tt;
 

  for (ll i = 1; i <= tt; i++) {
    answer();
  }

  return 0;
}
