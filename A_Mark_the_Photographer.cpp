#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  fi(a,b) for(int i=a;i<b;i++)
#define  fj(a,b) for(int j=a;j<b;j++)
#define haa cout<<'YES'<<endl;
#define naa cout<<'NO'<<endl;
 
void solve_amar(){ 
  ll n,x;
  cin>>n>>x;
  ll a[2*n];
  fi(0,2*n){
    cin>>a[i];
  }
  sort(a,a+ 2*n);
  
for(int i=0;i<n;i++){
    if(a[n+i]-a[i] < x){
        cout<<"NO";
        return;
    }else{
        continue;
    }
}
  cout<<"YES";
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