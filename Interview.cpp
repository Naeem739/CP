#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

     int t; cin >> t;
     while(t--){
           ll n; cin >> n;
           ll a[n+1]; a[0] = 0;
           ll ans = 0;
           for(int i = 1;i<=n;i++)cin >> a[ i];
           ll l = 1, h = n;
           while(l<=h){
                ll mid = (l+h)/2;
                cout <<"? "<< mid - l + 1<<" " ;
                for(int i = l;i<=mid; i++)cout << i <<" ";
                ll val; cin >> val;
                ll left_sum = 0, right_sum = 0;
                for(int i = l;i<=mid; i++)left_sum += a[i];
                if(val > left_sum){
                     ans = mid;
                     h = mid - 1;
                }
                else l = mid + 1;


           }
           cout << "! " << ans << endl;


     }






}

