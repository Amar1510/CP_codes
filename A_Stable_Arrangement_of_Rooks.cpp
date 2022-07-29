#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  fi(a,b) for(int i=a;i<b;i++)
#define  fj(a,b) for(int j=a;j<b;j++)
#define haa cout<<'YES'<<endl;
#define naa cout<<'NO'<<endl;
 
void solve_amar(){ 
  ll n,k;
  cin>>n>>k;
  if(k > (n+1)/2){
    cout<<"-1\n";
    return;
  }
  vector<string> s(n, string(n, '.'));
  fi(0,k){
    s[2*i][2*i]='R';
  }
  fj(0,n){
    cout<<s[j]<<"\n";
  }

  return ;
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