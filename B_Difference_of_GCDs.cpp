#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  fi(a,b) for(int i=a;i<b;i++)
#define  fj(a,b) for(int j=a;j<b;j++)
#define haa cout<<'YES'<<endl;
#define naa cout<<'NO'<<endl;
 
void solve_amar(){ 
  int n,l,r,f;
  cin>>n>>l>>r;
  int  a[n+1];
  bool flag = true;
  fi(1,n+1){
    f = r/i *i;
    if(f >= l) a[i]=f;
    else{
        flag = false;
        break;
    }  
    }
    if(flag){
        cout<<"YES\n";
        fi(1,n+1){
            cout<<a[i]<<" ";
        }
        cout<<"\n";
    }
    else{
        cout<<"NO\n";
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
//    cout<<endl;
 }
  return 0;
}