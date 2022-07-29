#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n;
        s=n/3;
        if(n%3==0){
            cout<<s<<" "<<s<<"\n";
        }
        else if(n%3==1){
            cout<<(s+1)<<" "<<s<<"\n";
        }
        else{
            cout<<(s)<<" "<<(s+1)<<"\n";
        }
    }
  
  return 0;
}