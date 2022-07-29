#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
const int N = 1e5 + 20;

int main()
{
  int amar;
  cin>>amar;

  while (amar--){
      ll n;
      cin>>n;
      int arr[N];
      for(int i=1;i<=n;i++){
          cin>>arr[i];
      }
      ll ans = 0;
      for (int i = 1; i < n; i++)
      {
          /* code */
          ll sum = (ll) arr[i] * arr[i+1];
          if(ans < sum ) ans = sum;
      }
      cout<<ans<<"\n";
      
  }
  
  
  return 0;
}