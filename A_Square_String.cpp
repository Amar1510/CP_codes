#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int solve_amar(){ 
  string s;
  cin>>s;
  if(s.length()%2!=0){
      cout<<"NO\n";
  }
  else{
      string s1 = s.substr(0,s.length()/2);
      string s2 = s.substr((s.length()/2),s.length()/2);
    //   cout<<s1<<"    "<<s2<<"\n";
      if(s1 == s2){
          cout<<"YES\n";
      }else{cout<<"NO\n";}
  }
  return 0;
 }
 
int main()
{
 int amar=1; 
 cin>>amar;
 while(amar--){
   solve_amar(); 
 }
  return 0;
}