#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  fi(a,b) for(int i=a;i<b;i++)
#define  fj(a,b) for(int j=a;j<b;j++)
int solve_amar(){ 
  ll n;cin>>n;
  if(n%7==0){
      cout<<n<<"\n";
  }
  else{
  fi(0,11){
      if((n - n%10 + i)%7==0){
          ll ans = (n - n%10 + i);
          cout<<ans<<"\n";
          return 0;
      }
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