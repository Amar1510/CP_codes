#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  fi(a,b) for(int i=a;i<b;i++)
#define  fj(a,b) for(int j=a;j<b;j++)
int solve_amar(){ 
  ll n;cin>>n;
  ll arr[2*n];
  fi(0,2*n){
    cin>>arr[i];
  }
  sort(arr,arr+2*n);
  ll i=0;
  ll j=2*n -1;
  while(i<j){
    cout<<arr[i]<<" "<<arr[j]<<" ";
    i++;
    j--;
  }
  cout<<"\n";
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