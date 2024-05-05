//Floyd Warshell Algorithm 

#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

int main() {
    vector<vector<ll>>g = {
        {0, 3, INT_MAX, 0},
        {0, 0, 5, INT_MAX},
        {INT_MAX, 0, 0, 1},
        {INT_MAX, INT_MAX, INT_MAX, 0}
    };
    int n = g.size(); 
    vector<vector<ll> >dis; 
    dis = g; 
    
    for (int k = 0; k < n; k ++ ){
    	   for (int i = 0; i < n; i++){
    	   	   for ( int j = 0; j< n; j ++ ){
    	   	   	   if (dis [ i ] [ j ] > dis [ i ][ k ]  + dis [ k ] [ j ])
    	   	   	   dis [ i ] [ j ] =   dis [ i ][ k ]  + dis [ k ] [ j ]; 
    	   	   }
    	   }
    }
    
    for ( int i = 0; i<n;i++){
    	   for ( int j = 0; j < n; j ++ ){
    	   	  if (dis[i][j] == INT_MAX)cout <<"INF "; 
    	   	  else cout << dis[i][ j ] << ' '; 
    	   }
    	   cout << endl; 
    }



    return 0;
}