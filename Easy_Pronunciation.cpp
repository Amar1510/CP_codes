#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  fi(a,b) for(int i=a;i<b;i++)
#define  fj(a,b) for(int j=a;j<b;j++)
#define haa cout<<'YES'<<endl;
#define naa cout<<'NO'<<endl;
 
void solve_amar(){ 
  string s;
  ll n,c=0;
  cin>>n>>s;
  fi(0,n){
    if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
        c=0;
        
    }
    else{
        c++;
    }
    if(c==4){
        cout<<"NO";
        return;
    }
  }
  cout<<"YES";
//   cout<<v.size();
//   for(int i=0;i<v.size();i++){
//     if(v[i]-v[i-1]>4){
//         cout<<"NO";
//         return;
//     }
//   }
//     cout<<"YES";
  return;
 }
 
int main()
{
 fast;
 int amar=1; 
 cin>>amar;
 while(amar--){
   solve_amar(); 
   cout<<endl;
 }
  return 0;
}