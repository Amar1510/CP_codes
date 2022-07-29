#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  fi(a,b) for(int i=a;i<b;i++)
#define  fj(a,b) for(int j=a;j<b;j++)
#define haa cout<<'YES'<<endl;
#define naa cout<<'NO'<<endl;
 
void solve_amar(){ 
  string s,ans="";
  cin>>s;
  fi(0,s.length()){
    if((s[i]=='A') || (s[i]=='a') || (s[i]=='E') || (s[i]=='e') || (s[i]=='I') || (s[i]=='i') || (s[i]=='O') || (s[i]=='o') || (s[i]=='U') || (s[i]=='u') || (s[i]=='Y') || (s[i]=='y') ){
        continue;
    }
    else{
        ans+=".";
        ans+=tolower(s[i]);
    }
  }
  cout<<ans;
  return;
 }
 
int main()
{
 fast;
 int amar=1; 
//  cin>>amar;
 while(amar--){
   solve_amar(); 
   cout<<endl;
 }
  return 0;
}