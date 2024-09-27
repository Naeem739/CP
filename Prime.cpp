#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef pair < ll, ll > Pair;
#define endl '\n'
#define Pair pair<ll,ll>
#define all(a)(a).begin(), (a).end()
const ll inf = 1e18 + 123;

const int N = 1e8+ 122; // 1e7 takes 0.115 sec, and 1e8 takes 1.367 sec
bool is_prime[N + 123 ]; 
vector<ll>prime; 

void prime_gen(){
	
	for(int i = 3;i<=N; i+=2 )is_prime[i] = 1; 
	is_prime [2] = 1; 
	
	for (ll i = 3; i * i <=N; i+=2 ){
	    if(is_prime[i]){
	    	 for (ll j = i*i ; j <= N; j += i ){
		 	is_prime[j] = 0; 
		 }
	    }
		 
	}
	// complexity of this Are: sqert(n)*log(log(n)); 
	
	prime.push_back(2); 
	for(ll i = 3; i<=N;i ++){
		if(is_prime[i])prime.push_back(i); 
	}
}

void answer() {
     
     int n; 
     cin >> n; 
     
     
     auto st = clock();
     prime_gen(); 
     cout << 1.00 * (((clock()) - st) )/CLOCKS_PER_SEC<< endl;  
     
     for (int i = 1;i<=n; i++ ){
     	   //if(is_prime[i])cout << i << "\n";
     }
     
     cout << prime.size() << endl; 
     
     for(int i = 0;i<n;i++)cout << prime[i] <<' '; 
     
  
   
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
