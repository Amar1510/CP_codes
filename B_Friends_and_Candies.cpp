#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int solve_amar(){ 
  int n;
  cin>>n;
  ll s=0,arr[n];
  for(int i=0;i<n;i++){
      cin>>arr[i];
      s+=arr[i];
  }
     if(s%n !=0){
         cout<<-1<<"\n";
     }
     else{
         ll c=0;
         s/=n;
         for(int i=0;i<n;i++){
         if(s<arr[i]){
             c++;
         }
         }
         cout<<c<<"\n";
     }
  return 0;
 }
 
int main()
{
 int amar=1; 
 cin>>amar;
 while(amar--){
   solve_amar(); 
 }
  return 0;
}