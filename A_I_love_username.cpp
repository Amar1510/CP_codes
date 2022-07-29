#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  fi(a,b) for(int i=a;i<b;i++)
#define  fj(a,b) for(int j=a;j<b;j++)
#define haa cout<<'YES'<<endl;
#define naa cout<<'NO'<<endl;
 
void solve_amar(){ 
  ll n,c=0;
  cin>>n;
  ll a[n];
  fi(0,n){
    cin>>a[i];
  }
  ll ma = a[0];
  ll mi = a[0];

  fi(0,n){
    if(a[i]>ma){
        ma = a[i];
        c++;
    }
    else if(a[i]<mi){
        mi = a[i];
        c++;
    }
  }

  cout<<c;

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