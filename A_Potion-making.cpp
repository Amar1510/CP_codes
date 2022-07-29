#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define   fi(a,b) for(int i=a;i<b;i++)
#define   fj(a,b) for(int j=a;j<b;j++)
int solve_amar(){ 
int k; 
cin>>k;

if((100-k)/k==0){
    cout<<1<<"\n";
    }
else if((100-k)%k ==0){
    cout<<(100-k)/k +1<<"\n";
}
else{
    cout<<100<<"\n";
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