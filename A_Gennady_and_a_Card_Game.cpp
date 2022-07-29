#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  fi(a,b) for(int i=a;i<b;i++)
#define  rfj(a,b) for(int j=a;j>b;j--)
#define haa cout<<'YES'<<endl;
#define naa cout<<'NO'<<endl;
 
void solve_amar(){ 
  string t,s;
//   vector<string> v[5];
// string v[5];
  cin>>t;
  fi(0,5){
    string a;
    cin>>a;
    s+=a;
    // cout<<v[i][0];
  }
  size_t f = s.find(t[0]);
  size_t f1 = s.find(t[1]);
  if(f != string::npos || f1!=string :: npos){
    cout<<"YES";
  }
  else{
    cout<<"NO";
  }
// cout<<s;
  return;
 }
 
int main()
{
 fast;
 int amar=1; 
//  cin>>amar;
 while(amar--){
   solve_amar(); 
   cout<<endl;
 }
  return 0;
}