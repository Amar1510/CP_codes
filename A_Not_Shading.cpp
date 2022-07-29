#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  fi(a,b) for(int i=a;i<b;i++)
#define  fj(a,b) for(int j=a;j<b;j++)
int solve_amar(){ 
    int n,m,r,c;
  cin >> n >> m >> r >> c;
    bool aa = false;
    bool rr = false;
    bool cc = false;
    bool oo = false;
 
    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= m; j++) {
        char l;
        cin >> l;
        if (l == 'B') {
          if (i == r && j == c) {
            aa = true;
          } else if (i == r) {
            rr = true;
          } else if (j == c) {
            cc = true;
          } else {
            oo = true;
          }
        }
      }
    }
    if (aa) {
      cout << 0;
    } else if (rr || cc) {
      cout << 1;
    } else if (oo) {
      cout << 2;
    } else {
      cout << -1;
    }
    cout << '\n';
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