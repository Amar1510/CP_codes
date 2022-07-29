#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  fi(a,b) for(int i=a;i<b;i++)
#define  fj(a,b) for(int j=a;j<b;j++)
#define haa cout<<'YES'<<endl;
#define naa cout<<'NO'<<endl;
 
void solve_amar(){ 
  ll n,k,l,c,d,p,nl,np;
  cin>>n>>k>>l>>c>>d>>p>>nl>>np;
  ll dr,li,sa;
  dr = (k*l)/nl;
  li = (c*d);
  sa = p/np;
  ll a = min(dr,li);
  ll b = min(a,sa);
  ll ans = b/n;
  cout<<ans;
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