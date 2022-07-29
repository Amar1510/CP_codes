#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  fi(a,b) for(int i=a;i<b;i++)
#define  fj(a,b) for(int j=a;j<b;j++)
int solve_amar(){ 
  ll n;
  cin>>n;
  ll h1,h2,h3;
  if(n%3==0){
      cout<<n/3<<" "<<n/3 + 1<<" "<<n/3-1<<"\n";
  }
  else if(n%3==1) {
      cout<<n/3<<" "<<n/3 + 2<<" "<<n/3 - 1<<"\n";
  }
  else if(n%3==2){
      cout<<n/3 + 1<<" "<<n/3 + 2<<" "<<n/3 - 1<<"\n";
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