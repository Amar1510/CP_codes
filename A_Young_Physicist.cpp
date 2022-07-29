#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  fi(a,b) for(int i=a;i<b;i++)
#define  fj(a,b) for(int j=a;j<b;j++)
#define haa cout<<"YES"<<endl;
#define naa cout<<"NO"<<endl;
 
void solve_amar(){ 
    ll n,x=0,y=0,z=0;
    cin>>n;
    while(n--){
        ll xi,yi,zi;
        cin>>xi>>yi>>zi;
        x+=xi;
        y+=yi;
        z+=zi;
    }
    // cout<<x<<" "<<y<<" "<<z;
    if(x==0 && y==0 && z==0)
      {  cout<<"YES\n";}
    else cout<<"NO\n";
  return;
 }
 
int main()
{
 fast;
 int amar=1; 
//  cin>>amar;
 while(amar--){
   solve_amar(); 
//    cout<<endl;
 }
  return 0;
}