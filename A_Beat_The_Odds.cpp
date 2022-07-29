#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
// set <int> s;
 
int solve_amar(ll n){ 
    ll arr[n],c=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }


    for(int j=1;j<n;j++){
        if((arr[j]%2==0) && (arr[j+1]%2 !=0)){
             c++;
        }
    }
    if(arr[0]%2 !=0  && arr[1]%2==0){
        c++;
    }
     cout<<c<<"\n";
  
  return 0;
 }
 
int main()
{
 int amar=1; 
 cin>>amar;
 while(amar--){
     ll n;
     cin>>n;
   solve_amar(n); 
 }
  return 0;
}