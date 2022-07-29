#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  fi(a,b) for(int i=a;i<b;i++)
#define  fj(a,b) for(int j=a;j<b;j++)
int solve_amar(){ 
  set <int> s;
  int n,x;
  cin>>n;
  fi(0,n){
    cin>>x;
    s.insert(x);
  }
  if((n-s.size())%2==0){
    cout<<s.size()<<"\n";
    }
  else{
    cout<< s.size()-1 <<"\n";
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