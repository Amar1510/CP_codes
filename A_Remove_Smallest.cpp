#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
ll solve_amar(ll n){
    ll arr[n]; 
    for (ll i = 0; i < n; i++)
    {
        /* code */
        cin>>arr[i];
    }
    sort(arr,arr+n);
    ll c=0;
    for (ll i = 1; i < n; i++)
    {
        /* code */
        if(abs(arr[i]-arr[i-1])>1){
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"YES\n";    
  
  return 0;
 }
 
int main()
{
 int amar=1; 
 cin>>amar;
 while(amar--){
    ll n;
    cin>>n;
   solve_amar(n); 
}
  return 0;
}