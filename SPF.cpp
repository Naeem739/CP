#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef pair < ll, ll > Pair;
#define endl '\n'
#define Pair pair<ll,ll>
#define all(a)(a).begin(), (a).end()
const ll inf = 1e18 + 123;

const int N = 1e7+ 122;
ll SPF[ N + 123]; 

void spfgen(){
	for (ll i = 1; i <=N; i++) SPF[i] = i; 
	
	for ( ll i = 2; i*i <= N; i++){
		 for (ll j = i*i; j<=N; j+=i){
		 	SPF[j] = min(SPF[j],i); 
		 }
	}
}

void answer() {
     
     int n; 
     cin >> n; 

     auto st = clock();
     spfgen(); // Smallest Prime Factor
     
     
     for(int i = 2;i<=n;i++){
     	  cout << i <<' ' << SPF[i]<<endl; 
     }
     
   
     
     
     
     
     
     
     
     
     
     
     
      
     cout << 1.00 * (((clock()) - st) )/CLOCKS_PER_SEC<< endl;  
     

     
  
   
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
