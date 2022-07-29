#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  fi(a,b) for(int i=a;i<b;i++)
#define  rfj(a,b) for(int j=a;j>b;j--)
#define haa cout<<'YES'<<endl;
#define naa cout<<'NO'<<endl;
 
void solve_amar(){ 
  ll n,c=0;

  cin>>n;
  string s;
  fi(0,n){
     cin>>s;
     if(s[0]=='T')c+=4;
     if(s[0]=='C')c+=6;
     if(s[0]=='O')c+=8;
     if(s[0]=='D')c+=12;
     if(s[0]=='I')c+=20;
  }
 
    cout<<c;

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