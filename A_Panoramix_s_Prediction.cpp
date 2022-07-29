#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  fi(a,b) for(int i=a;i<b;i++)
#define  fj(a,b) for(int j=a;j<b;j++)
#define haa cout<<'YES'<<endl;
#define naa cout<<'NO'<<endl;
 
 
bool is_prime(ll a){
  if(a<=1){
    return false;
  }
  for(int j=2;j<a;j++){
    if(a%j==0){
      return false;
    }
  }
  return true;
}


void solve_amar(){ 
  ll n,m;
  cin>>n>>m;
  if(is_prime(m)){
     fi(n+1,m+1){
      if(is_prime(i)){
        if(i==m){
          cout<<"YES";
          return;
        }
        else{
            cout<<"NO";
            return;
        }
        // cout<<i;
      }
    }
 
  }
  else{
    cout<<"NO";
    return;
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