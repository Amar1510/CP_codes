#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  fi(a,b) for(int i=a;i<b;i++)
#define  fj(a,b) for(int j=a;j<b;j++)
#define haa cout<<'YES'<<endl;
#define naa cout<<'NO'<<endl;
 
void solve_amar(){ 
  ll n,m,c=0;
  cin>>n>>m;
  char s[n][m];
  fi(0,n){
    fj(0,m){
        cin>>s[i][j];
    } 
  }
  fi(0,n){
    if(s[i][m-1]=='R'){
        // cout<<"RR"<<i<<" "<<m<<"\n";
        c+=1;
    }
  }
  fi(0,m){
    if(s[n-1][i]=='D'){
        c+=1;
    }
  }
  cout<<c;


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