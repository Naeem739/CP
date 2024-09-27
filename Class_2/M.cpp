#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef pair < ll, ll > Pair;
#define endl '\n'
#define Pair pair<ll,ll>
#define all(a)(a).begin(), (a).end()
const ll inf = 1e18 + 123;
const int N = 1e6 + 123;
int cs = 0; 

int power(int x ) {
    ll p = 1; 
    while(x--)p = p* 2; 
    return p; 
}

int binaryToDecimal(ll n ) {
	string s = to_string(n); 
	int decimal = 0; 
	int k = s.size() - 1; 
	
	for (int i = 0; i<s.size();i++) {
	     decimal += (s[i]-'0') * power(k--); 
	}
	return decimal ; 
}

void answer() {
	
      int ip10,ip11,ip12,ip13; 
      char c; 
      cin >> ip10>> c >> ip11 >> c >> ip12 >> c >> ip13; 
      
      int ip20,ip21,ip22,ip23; 
      cin >> ip20 >> c >> ip21 >> c >> ip22 >> c >> ip23; 
      
      ip20 = binaryToDecimal(ip20); 
      ip21 = binaryToDecimal(ip21); 
      ip22 = binaryToDecimal(ip22); 
      ip23 = binaryToDecimal(ip23); 
      
      cout <<"Case " << ++cs <<": "; 
      
      if(ip10 == ip20 and ip11 == ip21 and ip12 == ip22 and ip13 == ip23 )cout <<"Yes\n";
      else cout <<"No\n";  
      
     
     
     
     
   
}


int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  ll tt = 1;
  cin >> tt;

  for (ll i = 1; i <= tt; i++) {
    answer();
  }

  return 0;
}
