#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  fi(a,b) for(int i=a;i<b;i++)
#define  fj(a,b) for(int j=a;j<b;j++)
int solve_amar(){ 
  ll a,b;
  cin>>a>>b;
  if(a>b){
    fi(0,b){
        cout<<"01";
    }
    fj(0,a-b){
        cout<<"0";
    }
  }
  else{
    fi(0,a){
        cout<<"01";
    }
    fj(0,b-a){
        cout<<"1";
    }
  }
    cout<<"\n";
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