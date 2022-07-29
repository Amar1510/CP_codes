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
  ll a[n];
  fi(0,n){
    cin>>a[i];
  }
  fi(0,n){
    ll b;
    cin>>b;
    string s;
    cin>>s;
    ll ans = a[i];
    fj(0,b){
        if(s[j]=='D'){
            ll d=ans +1;
            d%=10;
            ans = d;
        }
        else{
            ll d=ans -1;
            d+=10;
            d%=10;
            ans = d;
        }
    }
     cout<<ans<<" ";
  }
//   cout<<"\n";
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