#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  fi(a,b) for(int i=a;i<b;i++)
#define  fj(a,b) for(int j=a;j<b;j++)
#define haa cout<<'YES'<<endl;
#define naa cout<<'NO'<<endl;
 
void solve_amar(){ 
  int n,c=0;
  cin>>n;
  int a[n];
  fi(0,n){
    cin>>a[i];
   
  }
  fi(0,n){
      if(a[i]==1){
      cout<<"CHEF";
      return;
      }
      c = c +  max(0,a[i]-2);
    }
  
    if(c%2==1){
      cout<<"CHEF";
    }
    else{
      cout<<"CHEFINA";
    }
  // }
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