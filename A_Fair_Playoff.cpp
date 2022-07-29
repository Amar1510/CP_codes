#include<bits/stdc++.h>
using namespace std;

int main()
{
 int t,count=0;
 cin>>t;
 while(t--){
     int a,b,c,d;
    cin>>a>>b>>c>>d;
    int x = max(a,b);
    int y = max(c,d);
    //cout<<x<<" "<<y;
    if(x > min(c,d) && y> min(a,b)){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }

 }
  return 0;
}