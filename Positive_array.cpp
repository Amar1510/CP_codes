#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  fi(a,b) for(int i=a;i<b;i++)
#define  rfj(a,b) for(int j=a;j>b;j--)
#define haa cout<<'YES'<<endl;
#define naa cout<<'NO'<<endl;
 
void solve_amar(){ 
  ll n,c=1,x=0;
  vector<ll>v;
  cin>>n;
  ll a[n];
  fi(0,n){
    cin>>a[i];
  }
  sort(a,a+n);
  ll i=0;
  while(x<n){
    if(a[x]>=i){
        x++;
    }
    else{
        i=0;
        x++;
        c++;
    }
} 
cout<<c;
   

// cout<<v.size();
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