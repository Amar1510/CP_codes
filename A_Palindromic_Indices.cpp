#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,c=0;
        cin>>n;
        string st;
        cin>>st;
        // if(n%2 ==0){
            
        //     for(int i=(n-1)/2;i<=n;i++){
        //         if(s[i]==s[i+1]){
        //             c+=2;
        //         }
        //     }
        //     cout<<c<<"\n";

        // }
        // else{
        //     c = 1;
        //     for(int i=(n-1)/2;i<n;i++){
        //         if(s[i]==s[i+1]){
        //             c+=2;
        //         }
        //     }
        //     cout<<c<<"\n";
        // }
        int mid = st[n/2];
        int i=n/2;
        while(mid == st[i] && i<=n-1){
            c++;
            i++;
        }
        if(n%2==0){
            cout<<2*c<<"\n";
        }
        else{
            cout<<(2*c)-1<<"\n";
        }
    // for (int i = (n/2); i >0; i--)
    // {
    //     /* code */
    //     if(s[i]==s[i-1]){
    //         c+=2;
    //     }
    // }
    // if(n%2==0){
    // cout<<c<<"\n";
    // }
    // else cout<<c+1<<"\n";
    //  }
    }
  
  return 0;
}