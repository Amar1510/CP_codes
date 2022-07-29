#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int tmp = 1, cons = 1,ans = 1;
        while (tmp < n) {
            ans++;
            cons += 2;
            tmp += cons;
        }
 
        cout << ans << endl;
    }
  
  return 0;
}