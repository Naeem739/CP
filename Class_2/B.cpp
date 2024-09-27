#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef pair < ll, ll > Pair;
#define endl '\n'
#define Pair pair<ll,ll>
#define all(a)(a).begin(), (a).end()
const ll inf = 1e18 + 123;
const int N = 1e6 + 123;
int tc  = 0; 

bool leapYear(ll n ) {

   return ( n % 4 == 0 || (n % 100 ==0 and n % 400 != 0 )); 
}
void answer() {
     
     string month,month2;
     int date2,year2,year,date; 
     cin >> month >> date >> year >> month2 >> date2 >> year2; 
     while(leapYear(year))year++; 
     ll x = year2 - year; 
     if(x<0)x = 0; 
     ll leap_days = x / 4 + 1;
     leap_days -= 2;  
     
     if(month == "January" or month == "February")leap_days++; 
     if(month2 != "January" or month2 != "February")leap_days++; 
     if(month2 == "February" and date2 == 29)leap_days++; 
     
     cout << "Case " << ++tc <<": " << leap_days << endl; 
     
     
     
   
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
