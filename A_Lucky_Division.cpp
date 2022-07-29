#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  fi(a,b) for(int i=a;i<b;i++)
#define  fj(a,b) for(int j=a;j<b;j++)
#define haa cout<<'YES'<<endl;
#define naa cout<<'NO'<<endl;

int lucky(ll a){
    string s = to_string(a);
    set <char> c;
    // cout<<s[0];
    fi(0,s.length()){
        if(s[i]=='4' || s[i]=='7'){
            c.insert(s[i]);
        }
        else {
            return -1;
        }
    }
    return 1;
}

void solve_amar(){ 
  ll n;
  cin>>n;
  fi(1,n+1){
    if(lucky(i)==1 && n%i==0){
        cout<<"YES";
        return;
    }
  }
  cout<<"NO";
// cout<<lucky(n);
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