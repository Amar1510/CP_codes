#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  fi(a,b) for(int i=a;i<b;i++)
#define  fj(a,b) for(int j=a;j<b;j++)
#define haa cout<<'YES'<<endl;
#define naa cout<<'NO'<<endl;
 
void solve_amar(){ 
  ll a,b=0,c=0;
  fi(1,6){
    fj(1,6){
        cin>>a;
        if(a==1 && i<=3){
            b=3-i;}
        else if(a==1 && i>3){
            b=i-3;}
        if(a==1 && j<=3){
            c=3-j;}
        else if(a==1 && j>3){
            c=j-3;}
    }
  }
//   cout<<b<<" "<<c;
  cout<<b+c;
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