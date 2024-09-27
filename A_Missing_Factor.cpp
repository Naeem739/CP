#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef pair < ll, ll > Pair;
#define endl '\n'
#define Pair pair<ll,ll>
#define all(a) (a).begin(), (a).end()
const ll inf = 1e18 + 123;

const int N = 1e6 + 122;
bool is_prime[N + 123];
vector<ll> prime;

int s(ll n ) {
    int x = 1; 
    while(1){
         if(1LL* x * x > n ) break; 
         x++; 
    }
    return x - 1; 
}

void prime_gen() {
  for(int i = 3; i <= N; i += 2) is_prime[i] = 1;
  is_prime[2] = 1;
  for (ll i = 3; i * i <= N; i += 2) {
    if (is_prime[i]) {
      for (ll j = i * i; j <= N; j += i) {
        is_prime[j] = 0;
      }
    }
  }
  prime.push_back(2);
  for (ll i = 3; i <= N; i++) {
    if (is_prime[i]) prime.push_back(i);
  }
}

void answer() {
  ll n;
  cin >> n;
  auto st = clock();
  prime_gen();
  map<ll, ll> Fact;
  for (int i = 0; prime[i] * prime[i] <= n; i++) {
    while (n % prime[i] == 0) {
      Fact[prime[i]]++;
      n /= prime[i];
    }
  }
  if (n > 1) Fact[n]++;
  for (auto [x, y] : Fact) cout << x << ' ' << y << endl;
  //cout << 1.00 * (clock() - st) / CLOCKS_PER_SEC << endl;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  ll tt = 1;
  cin >> tt;
  for (ll i = 1; i <= tt; i++) {
    answer();
  }
  return 0;
}
