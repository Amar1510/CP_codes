#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  fi(a,b) for(int i=a;i<b;i++)
#define  fj(a,b) for(int j=a;j<b;j++)
#define haa cout<<'YES'<<endl;
#define naa cout<<'NO'<<endl;
 
 int zero(int a){
    string s = to_string(a);
    ll c=0;
    fi(0,s.length()){
        if(s[i]=='0'){
            c++;
            s.erase(i,i);
        }
    }
    stringstream g(s);
    ll x=0;
    g>>x;
    return x;
 }

void solve_amar(){ 
  ll a,b;
  cin>>a>>b;
  ll c = a+b;
  // cout<<zero(a)
  if(zero(a)+ zero(b) == zero(c)){
    cout<<"YES";
  }
  else{
    cout<<"NO";
  }
  //  cout<<zero(a);
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