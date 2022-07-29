// #include<bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// #define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
// #define  fi(a,b) for(int i=a;i<b;i++)
// #define  fj(a,b) for(int j=a;j<b;j++)
// #define haa cout<<'YES'<<endl;
// #define naa cout<<'NO'<<endl;
 
// void solve_amar(){ 
//   string s;
//   cin>>s;
//   string o ="1111111";
//   string z ="0000000";
//   if(strstr(s.c_str(),o.c_str()) || strstr(s.c_str(),z.c_str()) ){
//     cout<<"YES";
//   }
//   else{
//     cout<<"NO";
//   }
//   return;
//  }
 
// int main()
// {
//  fast;
//  int amar=1; 
// //  cin>>amar;
//  while(amar--){
//    solve_amar(); 
//    cout<<endl;
//  }
//   return 0;
// }

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//A.Football Div. 2 - 42

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  fi(a,b) for(int i=a;i<b;i++)
#define  fj(a,b) for(int j=a;j<b;j++)
#define haa cout<<'YES'<<endl;
#define naa cout<<'NO'<<endl;
 
void solve_amar(){ 
  ll n,c=1;
  cin>>n;
  string s[n],s1;
  cin>>s[0];
  fi(1,n){
    cin>>s[i];
    if(s[i]==s[0]){
      c++;
    }
    else{
        s1 = s[i];
    }
  }
//   cout<<c<<" "<<s1;
  if(n==1){
    cout<<s[0];
  }
  else{
  if(c>(n-c)){
    cout<<s[0];
  }
  else{
    cout<<s1;
  }
  }
//   cout<<c;

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