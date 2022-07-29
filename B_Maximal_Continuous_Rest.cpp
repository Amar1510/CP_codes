#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  fi(a,b) for(int i=a;i<b;i++)
#define  fj(a,b) for(int j=a;j<b;j++)
#define haa cout<<'YES'<<endl;
#define naa cout<<'NO'<<endl;
 
void solve_amar(){ 
  ll n,ma =0,c=0;
  cin>>n;
  ll a[n],b[n];
  fi(0,n){
    cin>>a[i];
    if(a[i]==1){
        c++;
    }
    else{
        c=0;
    }
    b[i]=c;
  }
  ll ans =*max_element(b,b+n);
  ans = max(ma,ans);
  if(a[0]==a[n-1] && a[0]==1){
    cout<<ans+1;
  }
  else{
    cout<<ans;
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