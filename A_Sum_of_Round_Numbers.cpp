#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  fi(a,b) for(int i=a;i<b;i++)
#define  rfj(a,b) for(int j=a;j>b;j--)
#define haa cout<<'YES'<<endl;
#define naa cout<<'NO'<<endl;
 
void solve_amar(){ 
  ll n,p=1;
  cin>>n;
  vector<ll>v;
  while (n>0)
  {
    if(n%10>0){
        v.push_back(n%10 *p);
    }
    n/=10;
    p*=10;
  }
  cout<<v.size()<<"\n";
  fi(0,v.size()){
    cout<<v[i]<<" ";
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
   cout<<endl;
 }
  return 0;
}