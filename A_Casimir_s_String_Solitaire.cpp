#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define   fi(a,b) for(int i=a;i<b;i++)
#define   fj(a,b) for(int j=a;j<b;j++)
int solve_amar(){ 
  string s;
  ll a=0,b=0,c=0;
  cin>>s;
  if(s.length()%2!=0)cout<<"NO\n";
  else{
      fi(0,s.length()+1){
          if(s[i]=='A')a++;
          else if(s[i]=='B')b++;
          else if(s[i]=='C')c++;
      }
      if(b == s.length()/2){
          cout<<"YES\n";
      }
      else{
          cout<<"NO\n";
      }
    // cout<<a<<" "<<b<<" "<<c<<"\n";
  }
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