#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<ll, ll> Pair;
#define endl '\n'
const int mod = 1073741824; 
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

struct meeting {
	int start; 
	int end; 
	int pos; 
	
}; 
void answer() {
     
       int n; cin >> n; 
       struct meeting meet[n];
       for(int i = 0; i<n;i++){
       	cin >> meet[i].start >> meet[i].end>> meet[i].pos; 
       } 
       
       
      sort(meet,meet+n,[&](struct meeting m1, struct meeting m2){
      	if(m1.end<m2.end)return 1; 
      	else if(m1.end == m2.end and m1.pos<m2.pos)return 1; 
      	return 0; 
      }); 
      
      
      vector<int>v; 
      
      v.push_back(meet[0].pos); 
      int  k = v[0];
      
      for(int i  = 1; i<n; i++ ){
         if(k<meet[i].end)k = meet[i].end, v.push_back(meet[i].pos); 
      } 
      for(auto u:v)cout << u << ' '; 
      cout << endl;  
}




