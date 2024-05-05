#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
map<ll, vector<ll> > g;
vector<ll>ans;
bool v[100];
ll n ;
void dfs(ll u)
{
	v[u] = true;
	for(auto i : g[u])
	{
		if(!v[i])
		dfs(i);
	}
	ans.push_back(u);	
}
void topological_sort(){
    
    for(auto i : g){
			ll node = i.first;
			if(!v[node]){
				dfs(node);
			}
		}
    reverse(ans.begin(), ans.end());
}
int main()
{
	cin>>n;
	
	for(ll i=0;i<n;i++)
	{
		ll u,v;
		cin>>u>>v;
		g[u].push_back(v);
	}
	topological_sort();
	for(auto it: ans)
	{
		cout<<it<<" ";
	}
	
}
