#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  fi(a,b) for(int i=a;i<b;i++)
#define  fj(a,b) for(int j=a;j<b;j++)
#define haa cout<<'YES'<<endl;
#define naa cout<<'NO'<<endl;
 
void solve_amar(){ 
  ll n;
  cin>>n;
  if(n==1){
    ll x,y;
    cin>>x>>y;
    cout<<x+y;
    return;
  }
  // else{
  ll a[n],b[n],c[n];
  fi(1,n+1){
    cin>>a[i];
  }
  fi(1,n+1){
    cin>>b[i];
  }
  ll i=1;
  for(i=1;i+2<=n;i++){
    c[i]= a[i]+b[i+2];
    // cout<<c[i]<<"~~~~";
  }
  c[n-1]=a[n-1]+b[1];
  // cout<<c[n-1]<<"/////";
  // i++;
  c[n]=a[n]+b[2];
  // cout<<c[n]<<"||||";
  int size = sizeof(c)/sizeof(c[0]);
  // cout<<"-----"<<size<<"---";
  sort(c+1,c+n+1);
  // fi(1,n+1){
  //   cout<<c[i]<<" ";
  // }
  cout<<c[n/2 +1];
  // }
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