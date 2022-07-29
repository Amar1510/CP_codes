#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  fi(a,b) for(int i=a;i<b;i++)
#define  fj(a,b) for(int j=a;j<b;j++)
#define haa cout<<'YES'<<endl;
#define naa cout<<'NO'<<endl;
 
void solve_amar(){ 
  ll x,y;
  cin>>x>>y;
  ll ans = abs(x)+abs(y);
  if(x<0 && y<0){
    cout<<-ans<<" "<<0<<" "<<0<<" "<<-ans;
  }
  else if(y<0){
    cout<<0<<" "<<-ans<<" "<<ans<<" "<<0;
  }
  else if(x<0){
        cout<<ans*-1<<" "<<0<<" "<<0<<" "<<ans;
  }
  else{
    cout<<0<<" "<<ans<<" "<<ans<<" "<<0;
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