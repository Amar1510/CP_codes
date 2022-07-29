#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define   fi(a,b) for(int i=a;i<b;i++)
#define   fj(a,b) for(int j=a;j<b;j++)
int solve_amar(){ 
  ll n,c;
  cin>>n;
  ll a1[n],a2[n];
  fi(0,n){
      cin>>a1[i];
      a2[i]=a1[i];
  }
  sort(a1,a1+n);
  if(a1[0]<a1[1])c= a1[0];
  else c=a1[n-1];
  fi(0,n){
      if(a2[i]==c){
          cout<<i+1<<"\n";
          break;
      }
  }
//   cout<<c<<"\n";


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