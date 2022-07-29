#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  fi(a,b) for(int i=a;i<b;i++)
#define  fj(a,b) for(int j=a;j<b;j++)
#define haa cout<<'YES'<<endl;
#define naa cout<<'NO'<<endl;
 
void solve_amar(){ 
  ll n;
  set<char> c;
  cin>>n;
  string s = to_string(n);
  if(s[0]=='1'){
    fi(0,s.length()){
        if(s[i]=='1' || s[i]=='4'){
            c.insert(s[i]);
        }
        else{
            cout<<"NO";
            return;
        }
    }
    if(c.size()<=2 ){
        if(s.find("444") == -1){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
    else{
        cout<<"NO";
    }
  }
  else{
    cout<<"NO";
  }
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