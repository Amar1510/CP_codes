#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count=0,arr[2*n];
        for(int i=0;i<2*n;i++){
            cin>>arr[i];
            if(arr[i]%2==0){
                count++;
            }
        }
        if(count==n){
            cout<<"Yes\n";
        }
        else cout<<"No\n";
    }
  
  return 0;
}