#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define INF 99999999999999999

#define Fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(x) (x).begin(), (x).end()
void solve();
const ll N = 1000000;
vector<ll>prime; 
vector<bool>is_prime(N+123,1); 

void prime_gen()
{
	 for(ll i = 4;i<=N; i+=2)is_prime[i] = 0; 
	 for(ll i = 3; i*i<=N; i++)
	 {
	 	 if(is_prime[i])
	 	 {
	 	      for (ll j = i * i; j<=N; j+=i)
	 	      is_prime[j ] = 0; 
	 	 }
	 	 
	 }
	 prime.push_back(2); 
	 
	 for(int i = 3; i<=N; i+=2)
	     if(is_prime[i])prime.push_back(i); 
	  
}

int main()
{
    Fast();prime_gen(); 
    ll t= 1 ; cin >> t;
    while(t--) solve();    
}  

void solve() {
	   
	      ll n; cin >> n;
	      map<ll,ll>cnt; 
	      for(int i = 0;i<prime.size() and prime[i]*prime[i]<=n; i++) {
	      	     if(n%prime[i]==0) {
	      	     	         while(n%prime[i]==0)n/=prime[i], 
	      	     	         cnt[prime[i]]++;
	      	     	         
	      	     	} 
	       }
	      if(n>1)cnt [n ]++;
	      
	     
	      ll ans = 1; 
	      for(auto [x,y]: cnt) ans *= y + 1; 
	      cout << ans <<endl; 
	     
	      
	      
	      

}