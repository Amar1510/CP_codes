#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  fi(a,b) for(int i=a;i<b;i++)
#define  fj(a,b) for(int j=a;j<b;j++)
#define haa cout<<'YES'<<endl;
#define naa cout<<'NO'<<endl;

void compare(ll x,ll y){
    if(x<y){cout<<"<";}
    else if(x==y){cout<<"=";}
    else{
        cout<<">";
    }
}
void solve_amar(){ 
  ll x1,y1;
  cin>>x1>>y1;
  ll x2,y2;
  cin>>x2>>y2;
  ll x=x1,y=x2;
  fi(0,y1){
    x*=10;
  }
  fi(0,y2){
    y*=10;
  }
  if(y1 == 0){
    compare(x1,y);
  }
  else if(y2 ==0){
    compare(x,x2);
  }
  else if(y1 == 0 && y2 == 0){
    compare(x1,x2);
  }
  else{
    compare(x,y);
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