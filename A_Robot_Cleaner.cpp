#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  fi(a,b) for(int i=a;i<b;i++)
#define  fj(a,b) for(int j=a;j<b;j++)
#define haa cout<<'YES'<<endl;
#define naa cout<<'NO'<<endl;
 
void solve_amar(){ 
  ll n,m,rb,cb,rd,cd,a;
  cin>>n>>m>>rb>>cb>>rd>>cd;
  if(rb<= rd){
    a = rd-rb;
  }else a = 2*n -rb -rd;
    ll b;
  if( cb <= cd)b = cd-cb;
  else b = 2*m -cb -cd;

  cout<<min(a,b);
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