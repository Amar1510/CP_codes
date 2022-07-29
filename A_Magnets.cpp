#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  fi(a,b) for(int i=a;i<b;i++)
#define  fj(a,b) for(int j=a;j<b;j++)
#define haa cout<<'YES'<<endl;
#define naa cout<<'NO'<<endl;
 
void solve_amar(){ 
  ll n,p=0,e=0;
  cin>>n;
  string m[n];
  fi(0,n){
    cin>>m[i];
  }
  fi(0,n){
    if(m[i] != m[i+1]){
        // cout<<m[i]<<" "<<m[i+1]<<"\n";
        p++;
    }
  }
  cout<<p;
  
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