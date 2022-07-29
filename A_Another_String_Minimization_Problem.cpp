#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  fi(a,b) for(int i=a;i<b;i++)
#define  rfj(a,b) for(int j=a;j>b;j--)
// #define haa cout<<'YES<<endl;
#define naa cout<<'NO'<<endl;
 
void solve_amar(){ 
  ll n,m;
  cin>>n>>m;
  ll a[n];
  string s;
  fi(0,m){
     s+="B";
  }
  fi(0,n){
    cin>>a[i];
    ll k = max(a[i],m+1-a[i]);
    ll l = min(a[i],m+1-a[i]);
    if(s[l-1]=='A'){
        s[k-1]='A';
    }
    else{
        s[l-1]='A';
    }
    // if(s[a[i]]=='A'){
    
    // }
    // else{
       
    // }
  }
   cout<<s;


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