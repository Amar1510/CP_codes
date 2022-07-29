#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  fi(a,b) for(int i=a;i<b;i++)
#define  fj(a,b) for(int j=a;j<b;j++)
#define haa cout<<'YES'<<endl;
#define naa cout<<'NO'<<endl;
 
void solve_amar(){ 
  ll tm,nm,sm,t,sum =0,ans=0;
  cin>>tm>>nm>>sm;
  if(tm<(sm/nm)){t=tm;}
  else {
    if(sm%nm == 0){t=(sm/nm);}
    else{
      t = (sm/nm) + 1;
    }
  }
  // cout<<t<<"\n";

    if(tm*nm <= sm){
        ans += t*nm*nm;
    }
   else{
     ans+= (t-1)*nm*nm;
     ll z = sm - ((t-1)*nm);
     ans+= z*z;
  }  
    cout<<ans;
  
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