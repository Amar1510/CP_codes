#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  fi(a,b) for(int i=a;i<b;i++)
#define  fj(a,b) for(int j=a;j<b;j++)
#define haa cout<<'YES'<<endl;
#define naa cout<<'NO'<<endl;
 
void solve_amar(){
    set<char> c; 
  string s;
  ll ans=0;
  cin>>s;
  fi(0,s.length()){
    c.insert(s[i]);
    if(c.size()>3){
        ans++;
        c.clear();
        c.insert(s[i]);
    }
  }
  if(c.size()>0){
    ans++;
  }
  cout<<ans;

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