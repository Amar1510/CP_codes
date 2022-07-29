#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  fi(a,b) for(ll i=a;i<b;i++)
#define  fj(a,b) for(int j=a;j<b;j++)
#define haa cout<<'YES'<<endl;
#define naa cout<<'NO'<<endl;
 
 int small(ll a){
    fi(2,a+1){
        if(a%i==0)return i;
    }
    return 0;
 }

void solve_amar(){ 
  ll n,k;
  cin>>n>>k;
  if(n%2==0){
    cout<<n+ 2*k;
  }
  else{
    n= n + 2*(k-1) + small(n);
    cout<<n;
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