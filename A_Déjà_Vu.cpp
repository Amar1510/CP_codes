#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define   fi(a,b) for(int i=a;i<b;i++)
#define   fj(a,b) for(int j=a;j<b;j++)
string isPal(string s){
    string p =s;
    reverse(p.begin(),p.end());
    if(s==p){
        return "YES";
    }
    else{
        return "NO";
    }

}
int solve_amar(){ 
    string s;
    cin>>s;
    string p=s;
    string s1 = s.insert(0,"a");
    string s2 = p.insert(p.size(),"a");
    if(isPal(s1)=="YES" && isPal(s2)=="YES"){
        cout<<"NO\n";
    }
    else{
        if(isPal(s1)=="NO"){
            cout<<"YES\n"<<s1<<"\n";
        }
        else{
            cout<<"YES\n"<<s2<<"\n";
        }
    }

  return 0;
 }
 
int main()
{
 fast;
 int amar=1; 
 cin>>amar;
 while(amar--){
   solve_amar(); 
 }
  return 0;
}