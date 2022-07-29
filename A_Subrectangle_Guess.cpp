#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  fi(a,b) for(int i=a;i<b;i++)
#define  fj(a,b) for(int j=a;j<b;j++)


int solve_amar(){ 
  ll n,m;cin>>n>>m;
  ll a[n][m];
  ll ma = INT_MIN;
  fi(1,n+1){
    fj(1,m+1){
        cin>>a[i][j];
        ma = max(a[i][j],ma);
        // cout<<ma<<"\n";
    
    }  
  }
  ll b=0,c=0;
  fi(1,n+1){
    fj(1,m+1){
        if(a[i][j]==ma){
            b+=i;
            c+=j;
        }
    }
  }
//   cout<<b<<" "<<c<<"\n";
  ll x1 = (n-b)+1;
//   cout<<x1<<" ";
  b = max(x1,b);
  ll y1 = (m-c)+1;
//   cout<<y1<<" ";
  c = max(y1,c);
  ll v = b*c;
//   cout<<v<<"\n----------------------------------\n";
cout<<v<<"\n";
  
  return 0;
 }
 
int main()
{
 fast;
 int amar=1; 
 cin>>amar;
 while(amar--){
   solve_amar(); 
 }
  return 0;
}