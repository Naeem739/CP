#include<bits/stdc++.h>
using namespace std;
#define  ll long long int 
#define  all(x)  x.begin(),x.end()
#define  ifor(n)    for ( int  i = 0; i < n; i++ )
#define  jfor(n)    for ( int j  = 0; j < n; j++ )
#define  pb         push_back 
#define  yes      cout << "YES\n"
#define  no       cout <<"NO\n"
#define  endl      '\n'
 
 
void solve()
{
	     map<ll,ll>x; 
	     int n,k; cin >> n; k = n; 
	     ll a [ n + 1 ];
	     ifor(n)cin >> a [ i ];
	     ll sum = 0; 
	     ll ans = 0; 
	     x [ 0 ] = 1; 
	     for ( int  i = 0; i<n;i++)
	     {
 
	     	         sum += a[i]; 
	     	         ll kk = sum%k; 
	     	         if(kk<0)
	     	         kk+=k; 
	     	         ans+=x[kk];
	     	         x[kk]++; 
	     }
	     cout << ans << endl; 
	     
}
 
 
int main()
{
       ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
       //int t; cin >> t; while(t--)
       solve(); 
      
      
      
}
