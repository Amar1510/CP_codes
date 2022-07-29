#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  fi(a,b) for(int i=a;i<b;i++)
#define  fj(a,b) for(int j=a;j<b;j++)
#define haa cout<<'YES'<<endl;
#define naa cout<<'NO'<<endl;
 
void solve_amar(){ 
  ll n,c,q;
  cin>>n>>c>>q;
  string s;
  cin>>s;
  pair<ll,ll> p[c];
  fi(1,c+1){
    cin>>p[i].first>>p[i].second;
    // cout<<p[i].first<<" "<<p[i].second<<"\n";
    s+=s.substr(p[i].first-1,p[i].second - p[i].first +1);
  }
  ll a;
  fi(1,q+1){
    cin>>a;
    a--;
    cout<<s[a]<<"\n";
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
//    cout<<endl;
 }
  return 0;
}