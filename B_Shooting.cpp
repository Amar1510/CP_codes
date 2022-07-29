#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  fi(a,b) for(int i=a;i<b;i++)
#define  rfj(a,b) for(int j=a;j>b;j--)
#define haa cout<<string(YES)<<endl;
#define naa cout<<'NO'<<endl;
 
void solve_amar(){ 
  ll n,a[n];
  pair<ll,ll> p[1000];
  cin>>n;
  fi(0,n){
    cin>>p[i].first;
    p[i].second=i;
  }
  sort(p,p+n);
  reverse(p,p+n);
  ll ans=0;
  fi(0,n){
    a[i]+=p[i].second + 1;
    ans+=(p[i].first) * i +1;
  }
  cout<<ans<<"\n";
  fi(0,n){
    cout<<a[i]<<" ";
  }
  return;
 }
 
int main()
{
 fast;
 int amar=1; 
//  cin>>amar;
 while(amar--){
   solve_amar(); 
   cout<<endl;
 }
  return 0;
}