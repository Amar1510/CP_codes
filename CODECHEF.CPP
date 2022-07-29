#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  fi(a,b) for(int i=a;i<b;i++)
#define  fj(a,b) for(int j=a;j<b;j++)
#define haa cout<<'YES'<<endl;
#define naa cout<<'NO'<<endl;
 
void solve_amar(){ 
  ll n;
  cin>>n;
  ll a[n];
  ll mi = 0;
  ll ma = 0;
  fi(0,n){
    cin>>a[i];
    if(a[i] == 1){
      mi = i;
    }
    if(a[i]==n){
      ma = i;
    }
  }
  if(mi > ma){
    cout<< n - ma -2 + mi;
  }
  else{
    cout<< n - ma -1 + mi;
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