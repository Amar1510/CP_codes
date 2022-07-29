#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int solve_amar(){ 
    ll w,h,n,c=1;
    cin>>w>>h>>n;
    if(n==1 ){
        cout<<"YES\n";
        return 0;
    }
    else{
        while (w>0 && h>0)
        {
        if(w%2==0 ){
            w=w/2;
            c*=2;
        }
        else if(h%2==0){
            h=h/2;
            c*=2;
        }
        else{
            break;
        }
        if(c>=n){
            break;    
        }
    }
     if(c>=n){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
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