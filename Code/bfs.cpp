#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<char>g[100];
bool v[100];
ll bfs(char s)
{
	queue<ll>q;
	q.push(s);
	v[s]=true;
	while(!q.empty())
	{
		char n=q.front();
		cout<<n<<" ";
		q.pop();
		for(ll i=0;i<g[n].size();i++)
		{
			char it = g[n][i];
			if(!v[it])
			{
				v[it]=true;
				q.push(it);
			}
			
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
	bfs(s);
}
