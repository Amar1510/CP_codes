#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  fi(a,b) for(int i=a;i<b;i++)
#define  fj(a,b) for(int j=a;j<b;j++)
#define haa cout<<'YES'<<endl;
#define naa cout<<'NO'<<endl;
 
void solve_amar(){ 
  ll n;
  cin>>n;
  string s[n];
  map <string ,bool>m;
  fi(0,n){
    cin>>s[i];
    m[s[i]] = true;
  }
  fi(0,n){
    bool a = false;
    fj(1,s[i].length()){
      string f = s[i].substr(0,j), se = s[i].substr(j,s[i].length()-j);
      if(m[f] && m[se]){
        a = true;
      }
    }
    
    cout<<a;
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