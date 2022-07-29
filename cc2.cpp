#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  fi(a,b) for(int i=a;i<b;i++)
#define  fj(a,b) for(int j=a;j<b;j++)
#define haa cout<<'YES'<<endl;
#define naa cout<<'NO'<<endl;
 
void solve_amar(){ 
  ll n,on=0,la=0;
  cin>>n;
  ll a[n];
  fi(0,n){
    ll x;
    cin>>x;
    if(x==1)on=i+1;
    if(x==n)la=i+1;
  }
  ll b = on -1;
  ll c = n- la;
  if(la<on)cout<<b+c-1;
  else cout<<b+c;
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