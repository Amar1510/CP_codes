#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int solve_amar(ll n){ 
	int arr[1000]={11,22,33,44,55,66,77,88,99,111,222,333,444,555,666,777,888,999,1111,2222,3333,4444,5555,6666,7777,8888,9999,11111,22222,33333,44444,55555,66666,7777,88888,99999,111111,222222,333333,444444,555555,666666,777777,888888,999999,1111111,2222222,3333333,4444444,5555555,6666666,7777777,8888888,9999999,11111111,22222222,33333333,44444444,55555555,66666666,77777777,88888888,99999999,111111111,222222222,333333333,444444444,555555555,666666666,777777777,888888888,999999999,1111111111};
    if(n<10)cout<<n<<"\n";
    else{
        ll a=9;
        for(int i=0;i<1000;i++){

            if(arr[i]>n){
                a+=i;
                break;
            }
        }
        cout<<a<<"\n";
    }
    
  
  return 0;
 }
 
int main()
{
 int amar=1; 
 cin>>amar;
 while(amar--){
    ll t;
    cin>>t;
    solve_amar(t); 
 }
  return 0;
}