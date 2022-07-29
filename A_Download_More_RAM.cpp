#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  fi(a,b) for(int i=a;i<b;i++)
#define  fj(a,b) for(int j=a;j<b;j++)
#define haa cout<<'YES'<<endl;
#define naa cout<<'NO'<<endl;
 
void solve_amar(){ 
  vector<pair<ll,ll>> v;
  ll n,k;
  cin>>n>>k;
  ll a[n],b[n];
  fi(0,n){
    cin>>a[i];
  }
  fi(0,n){
    cin>>b[i];
  }
  fi(0,n){
    v.push_back(make_pair(a[i],b[i]));
  }
  sort(v.begin(),v.end());
  ll s=k;
  ll i=0;
  while (i<n && s>=v[i].first )
  {
    s+= v[i].second;
    i++;
  }
  cout<<s;
  
  
  

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