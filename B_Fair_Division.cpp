#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int solve_amar(){ 
    int n;
    cin>>n;
    int arr[n],sum=0,o=0,t=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
        if(arr[i]==1)o++;
        else t++;
    }

    if(sum%2==0){
        if(o>=2){
            cout<<"YES\n";
        }
        else if(n%2==0){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    else{
        cout<<"NO\n";
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