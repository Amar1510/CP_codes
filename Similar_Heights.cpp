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
  vector <ll> v(n,0);
  unordered_map <ll,ll>c;
  ll ma =0;
  fi(0,n){
    cin>>v[i];
    c[v[i]]++;
    ma = max(ma,v[i]);
  }
  ll r =0,mc=0;
  for(auto i : c){
    if(i.second == 1)r++;
    mc = max(mc,i.second);
  }
  if(r%2){
    ll y = (r+1)/2;
    if(c[ma]==1){
        if(mc == 2)y++;
    }
    cout<<y;
  }
  else{
    cout<<r/2;
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