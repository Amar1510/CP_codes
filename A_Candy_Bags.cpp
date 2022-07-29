#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  fi(a,b) for(int i=a;i<=b;i++)
#define  fj(a,b) for(int j=a;j<b;j++)
#define haa cout<<'YES'<<endl;
#define naa cout<<'NO'<<endl;
 
void solve_amar(){ 
  ll n;
  cin>>n;
  ll a[n*n];
  fi(1,n*n){
    a[i]=i;
  }
//   cout<<a[0];
  ll i=1,j=n*n;
  while(i<=(n*n)/2 && j>=(n*n)/2){
    cout<<a[i]<<" "<<a[j]<<" "<<a[i+1]<<" "<<a[j-1];
    cout<<endl;
    i+=2;
    j-=2;
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