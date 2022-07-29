#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  fi(a,b) for(int i=a;i<b;i++)
#define  fj(a,b) for(int j=a;j>=b;j--)
void solve_amar(){ 
  ll n;cin>>n;
  ll arr[n],sum=0,a=0;
  fi(0,n){
    cin>>arr[i];
    sum+=arr[i];
    }
    if(sum != 0){
      cout<<"NO\n";
      return;
    }
    fj(n-1,0){
      if(arr[j]!=0){
        if(arr[j]<0){
          break;
        }
        else{
          cout<<"NO\n";
          return;
        }
      }
    }
    fj(n-1,0){
      if(j==0){
        continue;
      }
      a+=arr[j];
      if(a>=0 && arr[j]!=0){
        cout<<"No\n";
        return;
      }
    }
    cout<<"YES\n";

  return;
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