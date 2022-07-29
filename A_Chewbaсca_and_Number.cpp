#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  fi(a,b) for(int i=a;i<b;i++)
#define  rfj(a,b) for(int j=a;j>b;j--)
#define haa cout<<'YES<<endl;
#define naa cout<<'NO'<<endl;
 
void solve_amar(){ 
    string s;
  ll n;
  cin>>n;
  s = to_string(n);
  if(s[0]!= '9'){
    fi(0,s.length()){
    if(s[i]=='5' || s[i]=='6' || s[i]=='7' || s[i]=='8'||s[i]=='9'){
        if(s[i]=='6')s[i]='3';
        if(s[i]=='5')s[i]='4';
        if(s[i]=='7')s[i]='2';
        if(s[i]=='8')s[i]='1';
        if(s[i]=='9')s[i]='0';
    }
  }
  cout<<s;
  }
 
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