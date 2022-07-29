#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  fi(a,b) for(int i=a;i<b;i++)
#define  fj(a,b) for(int j=a;j<b;j++)
#define haa cout<<'YES'<<endl;
#define naa cout<<'NO'<<endl;
 
void solve_amar(){ 
  ll a[2][2],sum =0;
  fi(0,2){
    fj(0,2){
        cin>>a[i][j];
        sum+= a[i][j];
    }
  }
  if(sum == 0)cout<<0;
  else if(sum==1 || sum ==3)cout<<1;
  else if(sum == 4)cout<<2;
  else{
     cout<<1;
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