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
  if(n<=10){
    cout<<0;
    return;
  }
  else{
    if(n-10 >= 1 && n-10 <=9){
        cout<<4;
    }
    else if(n-10 ==10){cout<<15;}
    else if(n-10 == 11){cout<<4;}
    else{
        cout<<0;
    }
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