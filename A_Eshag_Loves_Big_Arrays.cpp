#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int solve_amar(){ 
  ll n,m=1e9+10;
  cin>>n;
  ll arr[n];
  for(int i=1;i<=n;i++){
      cin>>arr[i], m = min(m,arr[i]);
  }
  // cout<<m<<"\n";
  ll c=0;
  for(int j=1;j<=n;j++){
      if(arr[j] >m){
          c++;
      }
  }
  cout<<c<<"\n";
  return 0;
 }
 
int main()
{
 int amar=1; 
 cin>>amar;
 while(amar--){
   solve_amar(); 
 }
  return 0;
}