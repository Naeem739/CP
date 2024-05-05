#include<bits/stdc++.h>
using namespace std; 
#define ll long long int
const int mod = 1e9 + 7; 

vector<pair<ll,ll>> g[100000]; 
#define inf 99999999999999999
ll dist[100000+123]; 

void dijkstra( ll s , ll n )
{
         for (int i = 0; i<=n; i++ )dist[ i ] = inf; 
         dist[s] = 0; 
         priority_queue< pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>> > q; 
  
         q.push({0,s}); 

         while(!q.empty())
         {

                   ll node = q.top().second; 
                   ll cost = q.top().first; 

                   q.pop(); 
                   if(dist[node]<cost)continue;

                   for(auto u:g[node]){

                        if(cost + u.second <dist[u.first])
                        {
                              dist[ u.first] = cost + u.second; 
                              q.push({dist[u.first], u.first}); 
                        }
                   }


         }
}



int main()
{

       ll n,m; cin >> n >> m; 
       for( int i = 0;i <m; i++){
       	    ll x , y, w; 
       	    cin >> x >> y >> w; 
       	    g[x].push_back({y,w}); 
       	    //g[y].push_back({x,w}); 
       }

       dijkstra(1,n); 
       for(int i = 1; i<=n;i++)cout << dist[i ] << " ";
       cout << endl;  
       	
return 0;   
}
