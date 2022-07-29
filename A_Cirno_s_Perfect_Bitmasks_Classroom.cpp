#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define   fi(a,b) for(int i=a;i<b;i++)
#define   fj(a,b) for(int j=a;j<b;j++)
int solve_amar(){ 
  ll x;cin>>x;
  ll max =1;
  if(x==1 || x==2){
    cout<<3<<"\n";
  }
  else if(x&1){
    cout<<1<<"\n";
  }
  else{
    if(!(x&(x-1))){
      cout<<x+1<<"\n";
    }
    else{
      cout<<(x&~(x-1))<<"\n";
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