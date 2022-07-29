#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  fi(a,b) for(int i=a;i<b;i++)
#define  fj(a,b) for(int j=a;j<b;j++)
#define haa cout<<'YES'<<endl;
#define naa cout<<'NO'<<endl;
 
void solve_amar(){ 
  string s,a;
  cin>>s;
  fi(0,s.length()){
    if(s[i]='.'){
        cout<<0;
    }
    if(s[i]=='-' && s[i+1]=='.'){
        cout<<1;
    }
    if(s[i]=='-' && s[i+1]=='-'){
        cout<<2;
    }
  }
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