#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<char>g[100];
bool v[100];
void dfs(char s)
{
	
	v[s]=true;
	cout<<s<<" ";
	for(ll i=0;i<g[s].size();i++)
	{
		char it = g[s][i];
		if(!v[it])
		{
		   dfs(it);
		}	
	}
	
}
int main()
{
	ll n;
	cin>>n;
	for(ll i=0;i<100;i++){
		g[i].clear();
		v[i]=false;
	}
	for(ll i=0;i<n;i++)
	{
		char u,v;
		cin>>u>>v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	char s;
	cin>>s;
	dfs(s);
}
