#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  fi(a,b) for(int i=a;i<b;i++)
#define  fj(a,b) for(int j=a;j<b;j++)
int solve_amar(){ 
  int n,m,k;
  cin>>n>>m>>k;
  string a,b,ans="";
  cin>>a>>b;
  sort (a.begin(),a.end());
  sort (b.begin(),b.end());
  int i=0,j=0,c1=0,c2=0;
  while(i<n && j<m){
    if(a[i]<b[j] && c1<k){
        ans+=a[i];
        i++;
        c1++;
        c2=0;
    }
    else if(a[i]>b[j] && c2<k){
        ans+=b[j];
        j++;
        c1=0;
        c2++;
    }
    else if(c1<k){
        ans+=a[i];
        i++;
        c1++;
        c2=0;
    }
    else if(c2<k){
        ans+=b[j];
        j++;
        c2++;
        c1=0;
    }
  }
  cout<<ans<<"\n";
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