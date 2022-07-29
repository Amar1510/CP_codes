#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  fi(a,b) for(int i=a;i<b;i++)
#define  fj(a,b) for(int j=a;j<b;j++)
#define haa cout<<'YES'<<endl;
#define naa cout<<'NO'<<endl;
 
void solve_amar(){ 
  ll n,m,s=0;
  cin>>n>>m;
  fi(1,n+1){
    s+=i;
    }
    // cout<<s;
    if(s<m){
    ll i=1;
    while(s<=m){
      s+=i;
      i++;
      if(s==m){
        cout<<0;
        return;
      }
      else if(s>m){
        cout<<s-m;
        return;
      }
      else{
        continue;
      }
      }
    }
    // cout<<s-m;
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