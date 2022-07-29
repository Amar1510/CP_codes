#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  fi(a,b) for(int i=a;i<b;i++)
#define  fj(a,b) for(int j=a;j<b;j++)
#define haa cout<<'YES'<<endl;
#define naa cout<<'NO'<<endl;
 
void solve_amar(){ 
  string s;
  vector <ll> v(3);
  cin>>s;
  fi(0,s.length()){
    if(s[i]=='1')v[0]++;
    else if(s[i]=='2')v[1]++;
    else if(s[i]=='3')v[2]++;
    else continue;
    }

    fj(0,s.length()){
        if(v[0] != 0){
            cout<<1;
            v[0]--;
        }
        else {
            if(v[1] != 0){
                cout<<2;
                v[1]--;
            }
            else {
                if(v[2] !=0){
                    cout<<3;
                    v[2]--;
                }
            }
        }

        if(v[0]==0 && v[1]==0 && v[2]==0){
            break;
        }
        cout<<'+';
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