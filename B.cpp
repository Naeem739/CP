#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<ll, ll> Pair;
#define endl '\n'
#define all(a) (a).begin(), (a).end()
void answer();

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll tt = 1;
   // cin >> tt;

    for (ll i = 1; i <= tt; i++) {
        answer();
    }

    return 0;
}

void answer() {
    ll n,k; 
    cin >> n >> k; 
    
    ll a[n];
    for(auto &u:a)cin >> u; 
    ll l = 1,h = k*(*min_element(a,a+n)); 
    while(l<=h){
    	ll mid = (l+h)/2; 
    	ll s = 0; 
    	for(int i = 0;i<n;i++){
    		s += mid/a[i]; 
    	}
    	if(s>=k)h = mid - 1; 
    	else l = mid + 1; 
    }    
    cout << h + 1 << endl; 
}


