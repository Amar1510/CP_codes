#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  fi(a,b) for(int i=a;i<b;i++)
#define  fj(a,b) for(int j=a;j<b;j++)
#define haa cout<<'YES'<<endl;
#define naa cout<<'NO'<<endl;
 
void solve_amar(){ 
  ll x,y,z;
  cin>>x>>y>>z;
  if(x<=3){
    cout<<x*y;
  }
  else{
    ll ans;
    if(x%3==0){
        ans = 3*(x/3)*y + (x/3 -1)*z;
        cout<<ans;
    }
    else{
        ans = 3*(x/3)*y + (x/3)*z + (x%3)*y;
        cout<<ans;
    }
  }
  return;
 }
 
int main()
{
 fast;
 int amar=1; 
 cin>>amar;
 while(amar--){
   solve_amar(); 
   cout<<endl;
 }
  return 0;
}