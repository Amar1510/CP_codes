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
  cin>>n;
    if(n==1 || n==2 || n==4){
        cout<<-1;
        return;
    }
    else{
        if(n%3==0){
            cout<<n/3<<" "<<0<<" "<<0; 
        }
        else if(n%3==1){
            cout<<(n-7)/3<<" "<<0<<" "<<1;
        }
        else{
            cout<<(n-5)/3<<" "<<1<<" "<<0;
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