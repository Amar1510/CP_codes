#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,w,n,p=1,sum=0;
    cin>>k>>n>>w;
    for(int i=1;i<=w;i++){
        p=i*k;
        sum = sum + p;
    }
    if(sum<=n){
        cout<<0;
    }
    else cout<<sum-n;
  
  return 0;
}