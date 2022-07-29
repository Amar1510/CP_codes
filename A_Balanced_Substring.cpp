#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  fi(a,b) for(int i=a;i<b;i++)
#define  fj(a,b) for(int j=a;j<b;j++)
#define haa cout<<'YES'<<endl;
#define naa cout<<'NO'<<endl;
 
void solve_amar(){ 
  ll n;cin >> n;
  string s;
  cin>>s;
  if(s.length()==1)
  { cout<<"-1 -1";
  }
  else{
  fi(0,n){
    if(s[i] != s[i+1]){
      cout<<i+1<<" "<<i+2;
      break;
      
    }
    else{cout<<"-1 -1"; 
    break;}
  }}
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