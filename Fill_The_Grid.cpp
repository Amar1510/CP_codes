#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  fi(a,b) for(int i=a;i<b;i++)
#define  rfj(a,b) for(int j=a;j>b;j--)
#define haa cout<<'YES'<<endl;
#define naa cout<<'NO'<<endl;
 
void solve_amar(){ 
  ll n,m;
  cin>>n>>m;
  if(n<2 && m>=2 || n>=2 && m<2){
    cout<<0;
  }
  if(n%2==0 && m%2==0){
        cout<<0;
  }
  else if(n%2==0 && m%2!=0){
        cout<<n;
    }
    else if(m%2==0 && n%2!=0){
        cout<<m;
    }
  else{
    cout<<n+m -1;
 
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