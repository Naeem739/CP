//BellmenFOrd Algorithm 

#include<bits/stdc++.h>
using namespace std;
#define  ll long long int 
#define INF 1e9 +123 
int main (){
	
     int n,m; cin >> n >> m; 
     vector<vector<ll>> g; 
     
     int u,v,w; 
     
     for(int i = 0; i<m;i++){
     	   cin >> u >> v >> w; 
     	   g.push_back({u,v,w}); 
     }
     
     int s; cin >> s; 
     
     vector<ll>dis(n + 1 ,INF); 
     dis[s] = 0; 
     
     for(int i = 1; i<=n -1 ; i++ ){
     	   for (auto it : g ){
     	   	  u = it [ 0 ]; 
     	   	  v = it  [ 1 ]; 
     	   	  w = it [ 2 ];  
      	  dis [ v ] = min (dis[v], dis[u] + w ); 
     	   }
     }
     
     // Check Negative edge cycle 
     
     bool Neg = false; 
     
     for (auto it : g ){
     	   	   u = it [ 0 ]; 
     	   	   v = it [ 1 ]; 
     	   	   w = it [ 2 ]; 
     	   	   if (dis [ v ]  >  dis [ u ]  + w ) Neg = true; 
     	   }
     
       if(!Neg )for(auto u: dis )cout << u << ' '; 
       else cout <<"Graph Contains Negative Edge Cycle"; 

     
    
	return 0; 
}
