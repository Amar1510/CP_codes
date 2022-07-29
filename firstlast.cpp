#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define   fi(a,b) for(ll i=a;i<b;i++)
#define   fj(a,b) for(int j=a;j<b;j++)
int solve_amar(){ 
  ll n;
  cin>>n;
  ll arr[n],m=0,k=n-1;
  fi(0,n){
      cin>>arr[i];
  }
  fi(0,n){
    ll l = arr[i]+(arr[k%n]);
    m = max(l,m);
    k++;
  }
  cout<<m<<"\n";
  
  return 0;
 }
 
int main()
{
 fast;
 int amar=1; 
 cin>>amar;
 while(amar--){
   solve_amar(); 
 }
  return 0;
}