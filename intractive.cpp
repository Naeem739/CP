#include<bits/stdc++.h>
using namespace std;
#define ll long long int
string q(ll x ){
        cout << x << endl;
        string s; cin >> s;
        return s;
}
int main(){


    ll l = 1,h = 1e6,ans1 = -1;

    while(l<=h){
         ll mid = (l + h )/ 2;
         string ans = q(mid);
         if(ans == ">="){
             ans1 = mid;
             l = mid + 1;
         }
         else h = mid -1;

    }

    cout <<"! "<<ans1<<endl;



}
