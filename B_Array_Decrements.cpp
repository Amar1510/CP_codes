#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  fi(a,b) for(int i=a;i<b;i++)
#define  fj(a,b) for(int j=a;j<b;j++)
int solve_amar(){ 
    int n;
        cin>>n;
        int a[n],b[n];
        for(int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for(int i = 0; i < n; i++)
        {
            cin>>b[i];
        }
        int mx = INT_MIN;
        for(int i = 0; i < n; i++)
        {
            mx = max(abs(a[i] - b[i]),mx);
        }
        for(int i = 0; i < n; i++)
        {
            a[i] -= mx;
        }
        bool flag = 1;
        for(int i = 0; i < n; i++)
        {
            if(a[i] != b[i] && b[i] != 0)
            {
                flag = 0;
                break;
            }
        }
        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
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