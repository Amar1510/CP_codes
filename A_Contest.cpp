#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  fi(a,b) for(int i=a;i<b;i++)
#define  fj(a,b) for(int j=a;j<b;j++)
#define haa cout<<'YES'<<endl;
#define naa cout<<'NO'<<endl;
 
void solve_amar(){ 
  ll a,b,c,d;
  cin>>a>>b>>c>>d;
  ll m = max(3*a /10, (a - (a*c / 250)));
  ll v = max(3*b /10, (b - (b*d / 250)));
  if(m>v){
    cout<<"Misha";
  }
  else if(m<v){
    cout<<"Vasya";
  }
  else{
    cout<<"Tie";
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