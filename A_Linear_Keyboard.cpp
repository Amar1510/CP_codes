#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  fi(a,b) for(int i=a;i<b;i++)
#define  fj(a,b) for(int j=a;j<b;j++)
#define haa cout<<'YES'<<endl;
#define naa cout<<'NO'<<endl;
 
void solve_amar(){ 
  ll s=0;
  string s1,s2;
  cin>>s1>>s2;
  fi(1,s2.length()){
    s+= abs(find(s1.begin(),s1.end(),s2[i])- find(s1.begin(),s1.end(),s2[i-1]));
    // cout<<s<<" ";
  }
  // cout<<endl;
  cout<<s;
  return ;
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