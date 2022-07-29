#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  fi(a,b) for(int i=a;i<b;i++)
#define  fj(a,b) for(int j=a;j>=b;j--)
int solve_amar(){ 
  ll n;cin>>n;
  string st; cin>>st;
  ll a=0;
  a=a+ n;
  fj(n-1,1){
    if(st[j]=='0' && st[j-1]=='1'){
        a+=j;
    }
    else if(st[j]=='1' && st[j-1]=='0'){
        a+=j;
    }
  }
  cout<<a<<"\n";
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