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
  ll a[n][n];
  fi(0,n){
    fj(0,n){
        cin>>a[i][j];
    }
  }
  fi(0,n){
    fj(0,n){
        ll d1 = a[i][j]-'0';
        ll d2 = a[n-j-1][i]-'0';
        ll d3 = a[j][n-i-1]-'0';
        ll d4 = a[n-1-i][n-j-1]-'0';
        ll c = d1+d2+d3+d4;
        if(c>=2){
            a[i][j]='1';
            a[n-j-1][i]='1';
            a[j][n-i-1]='1';
            a[n-1-i][n-j-1]='1';
        }
    }
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