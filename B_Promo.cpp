#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  fi(a,b) for(int i=a;i<b;i++)
#define  fj(a,b) for(int j=a;j<b;j++)
int solve_amar(){ 
  ll n,q;cin>>n>>q;
  ll p[n];
  fi(0,n){
    cin>>p[i];
  }
  sort(p,p+n,greater<int>());
  ll arr[n+1];
  arr[0]=0;
  fj(0,n+1){
    arr[j]=p[j-1]+arr[j-1];
  }
  while (q--)
  {
    ll x,y;cin>>x>>y;
    cout<<arr[x]-arr[y-1]<<"\n";
  }
  
  return 0;
 }
 
int main()
{
 fast;
 int amar=1; 
 cin>>amar;
 while(amar--){
   solve_amar(); 
 }
  return 0;
}