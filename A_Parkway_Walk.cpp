#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  fi(a,b) for(int i=a;i<b;i++)
#define  fj(a,b) for(int j=a;j<b;j++)
int solve_amar(){ 
  ll n,m,a;
  ll sum=0;
  cin>>n>>m;
  fi(0,n){
    cin>>a;
    sum+=a;
  }
  if(sum>m){
    cout<<sum-m<<"\n";
  }
  else{cout<<0<<"\n";}
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