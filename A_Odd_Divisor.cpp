#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  fi(a,b) for(ll i=a;i<b;i+=2)
#define  fj(a,b) for(int j=a;j<b;j++)
#define haa cout<<"YES"<<endl;
#define naa cout<<"NO"<<endl;
 
void solve_amar(){ 
  ll n;
  cin>>n;
  if(n & n-1){
    haa
  }
  else{
    naa
  }
  return;
 }
 
int main()
{
 fast;
 int amar=1; 
 cin>>amar;
 while(amar--){
   solve_amar(); 
  //  cout<<endl;
 }
  return 0;
}