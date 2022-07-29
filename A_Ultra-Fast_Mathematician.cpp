#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  fi(a,b) for(int i=a;i<b;i++)
#define  fj(a,b) for(int j=a;j<b;j++)
#define haa cout<<'YES'<<endl;
#define naa cout<<'NO'<<endl;
 
void solve_amar(){ 
  string  a,b,c="";
  cin>>a>>b;
  fi(0,a.length()){
    if(a[i] != b[i]){
        // c[i]='1';
        cout<<1;
    }
    else{
        // c[i]='0';
        cout<<0;
    }
  }
//   cout<<b;
//   cout<<c;
  return;
 }
 
int main()
{
 fast;
 int amar=1; 
//  cin>>amar;
 while(amar--){
   solve_amar(); 
   cout<<endl;
 }
  return 0;
}