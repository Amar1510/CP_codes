#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  fi(a,b) for(int i=a;i<b;i++)
#define  fl(a,b) for(int l=a;l<b;l++)
#define  fj(a,b) for(int j=a;j<b;j++)
#define haa cout<<'YES'<<endl;
#define naa cout<<'NO'<<endl;

bool is_pal(string s){
    string b = s;
    reverse(b.begin(),b.end());
    if(s==b)return true;
    else return false;
} 

// void substring(string s1,ll n){
//    fi(0,n){
//     fj(1,n-1+1){
//         string k = s1.substr(i,j);
//         if(is_pal(k))cout<<k;
//         return;
//     }
//    }
// }

void solve_amar(){ 
  ll n,z=0,o=0;
  cin>>n;
  string s;
  cin>>s;
  if(is_pal(s)){
    cout<<s;
    return;
  }
  fi(0,s.size()){
    if(s[i]=='0')z++;
    else o++;
  }
  if(z<o){
    ll c = n-z;
    fi(0,c){
        cout<<'1';
    }
  }
  else{
    ll c=n-o;
    fi(0,c){
        cout<<'0';
    }
  }

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