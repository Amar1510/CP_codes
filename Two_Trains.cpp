//~~~~~~~~~~~~~~~~~~~~~~~~~~ HEADER ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include<bits/stdc++.h>
using namespace std;
 
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
typedef long long int ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<string, string> pss;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef map<int, int> mi;
typedef map<ll,ll> mll;
//~~~~~~~~~~~~~~~~~~~~~ MACROS ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#define  fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  fi(a,b) for(int i=a;i<b;i++)
#define  rfi(a,b) for(int i=a;i>b;i--)
#define  fj(a,b) for(int j=a;i<b;j++)
#define  rfj(a,b) for(int j=a;j>b;j--)
#define haa cout<<"YES"<<endl;
#define naa cout<<"NO"<<endl;
#define fs first
#define se second
#define mp make_pair
#define pb push_back
#define allv(v) v.begin(), v.end()
#define alla(arr, sz) arr, arr + sz
#define SIZE(v) (int)v.size()
#define SORT(v) sort(allv(v))
#define REVERSE(v) reverse(allv(v))
#define MA INT64_MIN
#define MI INT64_MAX
#define seea(a,x,y) for(int i=x;i<y;i++){cin>>a[i];}
#define seev(v,n) for(int i=0;i<n;i++){int x; cin>>x; v.push_back(x);}
#define sees(s,n) for(int i=0;i<n;i++){int x; cin>>x; s.insert(x);}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 
//~~~~~~~~~~~~~~~~~~~~ SOLUTION ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
void solve_amar(){ 
    ll n,s=0;
    cin>>n;
    n--;
    ll a[n],b[n];
    fi(0,n){
        cin>>a[i];
        s+=a[i];
    }
    b[0]= a[0];
    fi(1,n){
        b[i]= b[i-1]+a[i];
        // cout<<b[i]<<" ";  
    }
    ll bs=0;
    bs += a[0]*2;
    fi(0,n-1){
        // cout<<b[i+1]<<" ";
        if(bs>= b[i+1]){
            // cout<<a[i+1]<<" ";
            bs += a[i+1];
        }
        else{
            ll c = b[i+1]-bs;
            bs+= a[i+1] + c;
        }
    }
    cout<<bs;
    
 
  return;
 }
 
//~~~~~~~~~~~~~~~~~~~~~~~ MAIN ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
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