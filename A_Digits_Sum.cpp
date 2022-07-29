#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll sum(ll a){
    ll s =0;
    while(a>0){
        s+=(a%10);
        a=a/10;
    }
    return s;
    
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        int n,ans=0;
    cin>>n;
    ans=n/10+((n%10==9)?1:0);
    cout<<ans<<endl;

    }
    
  
  return 0;
} 