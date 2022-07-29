#include<bits/stdc++.h>
using namespace std;
typedef long long int ll; 


ll sum(ll a){
    ll s =0;
    while(a>0){
        s+=a%10;
        a=a/10;
    }
    return s;
}

int main()
{
  ll t;
  cin>>t;
  while(t--){
      ll n;
      cin>>n;
      for(ll i=n;;i++){
          if(__gcd(i,sum(i))>1){
              cout<<i<<"\n";
              break;
          }
      }

  }
  return 0;
}