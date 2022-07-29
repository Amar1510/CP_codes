#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define   fi(a,b) for(int i=a;i<b;i++)
#define   fj(a,b) for(int j=a;j<b;j++)
int solve_amar(){ 
  int n;cin>>n;
  int arr[n];
  int up=0,dn=0;
  fi(0,n){
      cin>>arr[i];
      if(arr[i]==2){
          dn++;
      }
      else if(arr[i]==1){
          up++;
      }
      else{
          up++;
      }
  }
      cout<<up<<"\n";

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