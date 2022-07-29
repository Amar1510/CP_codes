#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  fi(a,b) for(int i=a;i<b;i++)
#define  fj(a,b) for(int j=a;j<b;j++)
int solve_amar(){ 
  ll arr[4];
//   cin>>a>>b>>c>>d;
fi(0,4){cin>>arr[i];}
ll a = arr[0];
sort(arr,arr+4,greater<int>());
// int j=0,i=0;
fi(0,4){
    if(arr[i]==a){
        cout<<i<<"\n";
        break;
    }
}
// cout<<j<<"\n";

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