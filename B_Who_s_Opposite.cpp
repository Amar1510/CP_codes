#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define   fi(a,b) for(int i=a;i<b;i++)
#define   fj(a,b) for(int j=a;j<b;j++)
int solve_amar(){ 
  ll a,b,c;
  cin>>a>>b>>c;
  ll n= 2*abs(a-b);
  if(a>n || b>n || c>n){
      cout<<-1<<"\n";
  }
  else{
      ll d1,d2;
      d1 = c + (n/2);
      d2 = c - (n/2);
      if(d1<=n){
          cout<<d1<<"\n";
      }
      else if(d2<=n){
          cout<<d2<<"\n";
      }
      else{
          cout<<-1<<"\n";
      }
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