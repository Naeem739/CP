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
    //cin >> tt;

    for (ll i = 1; i <= tt; i++) {
        answer();
    }

    return 0;
}

void answer() {
     ll n;cin >> n;
     ll a[n + 1]={0};
     map<ll,ll>cnt;
     for(int i = 1;i<=n;i++)cin >> a[ i ],a[i] += a[ i - 1];
     ll ans = 0; cnt[0] = 1;
     for(int i = 1;i<=n;i++){
     	   ll x = a [ i ] % n;
     	   if(x<0)x+=n;
     	   ans+=cnt[x];
     	   cnt[x]++;
     }
     cout <<1 << endl;
}
