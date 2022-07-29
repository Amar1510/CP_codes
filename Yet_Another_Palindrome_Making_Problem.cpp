#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  fi(a,b) for(int i=a;i<b;i++)
#define  fj(a,b) for(int j=a;j<b;j++)
#define haa cout<<'YES'<<endl;
#define naa cout<<'NO'<<endl;

bool is_pal(string a){
    string b = a;
    reverse(b.begin(),b.end());
    if(a==b){
        return true;
    }
    else{
        return false;
    }
} 

void solve_amar(){ 
  ll n;
  cin>>n;
  string s;
  cin>>s;
  map<char,ll>m,a;
  if(is_pal(s)){
    cout<<"YES";
    return;
  }
  
  fi(0,n){
    // m[s[i]]++;
    if(i%2==0){
        m[s[i]]++;
    }
    else{
        a[s[i]]++;
    }
  }
  if(m==a){
    cout<<"YES";
  }
  else{
    cout<<"NO";
  }
//   for( auto &it :m){
//     // cout<<it.second;
//     if(it.second%2==0){
//         continue;
//     }
//     else{
//         cout<<"NO";
//         return;
//     }
//   }
//   cout<<"YES";
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