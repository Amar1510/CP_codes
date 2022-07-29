#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  fi(a,b) for(int i=a;i<b;i++)
#define  fj(a,b) for(int j=a;j<b;j++)
#define haa cout<<'YES'<<endl;
#define naa cout<<'NO'<<endl;
 
void solve_amar(){ 
  ll n,m;
  cin>>n>>m;
  ll a[m];
  fi(0,m){
    cin>>a[i];
  }
  sort(a,a+m);
  ll mi = a[m-1]-a[0];
  fi(n,m){
    ll ans = abs(a[i-1]-a[i-n]);
    mi = min(mi,ans);
  }
  cout<<mi;
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