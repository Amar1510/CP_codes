#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
//  #define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int solve_amar(){ 
  ll l1,l2,l3;
  cin>>l1>>l2>>l3;
  if(l1 == l2){
      if(l3%2==0)cout<<"YES\n";
      else cout<<"NO\n";
  }
  else if(l3 == l2){
      if(l1%2==0)cout<<"YES\n";
      else cout<<"NO\n";
  }
  else if(l1 == l3){
      if(l2%2==0)cout<<"YES\n";
      else cout<<"NO\n";
  }
  else{
      if(l1 ==l3+l2 || l3==l1+l2 || l2==l1+l3)cout<<"YES\n";
      else cout<<"NO\n";
  }

  return 0;
 }
 
int main()
{
//  fast;
 int amar=1; 
 cin>>amar;
 while(amar--){
   solve_amar(); 
 }
  return 0;
}