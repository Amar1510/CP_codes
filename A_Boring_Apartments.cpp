#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define   fi(a,b) for(int i=a;i<b;i++)
#define   fj(a,b) for(int j=a;j<b;j++)
vector <int> v;
int length (ll a){
    int c=0;
    if(a==0){
        return 1;
    }
    while (a != 0)
    {
        a/=10;
        c++;}   
    return c;
}
int solve_amar(){ 
  int x;cin>>x;
  int t;
  fi(1,10){
      t=i;
      while (t<=9999){
          v.push_back(t);
          t = t*10 + i;
      }
  }
//   cout<<v[]<<"\n";
int s1=0;
fi(0,36){
    if(v[i]==x){
        s1+=length(v[i]);
        break;
    }
    else{
    s1+=length(v[i]);
    // cout<<"----------\n";
    }
    // cout<<v[i]<<"\n";
}
// cout<<sum(1)<<"\n";
cout<<s1<<"\n";
  return 0;
 }
 
int main()
{
 fast;
 int amar=1; 
 cin>>amar;
//  cout<<sum(amar);
 while(amar--){
   solve_amar(); 
 }
  return 0;
}