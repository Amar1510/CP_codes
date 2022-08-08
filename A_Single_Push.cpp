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
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
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
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 
void solve_amar(){ 
    ll n;
    set <ll> s;
    cin>>n;
    ll a[n],b[n];
    fi(0,n){
        cin>>a[i];
    }
    fi(0,n){
        cin>>b[i];
    }

    fi(0,n){
        if(i<=n-3 && (a[i]!=b[i] && a[i+1]==b[i+1] && a[i+2]!=b[i+2])){
            naa
            return;

        }
        if(a[i]<b[i]){
            s.insert(abs(a[i]-b[i]));
        }
        else if(a[i]>b[i]){
            naa
            return;
        }
    }
    if(s.size()>1){
        naa
    }
    else{
        haa
    }

 
 
  return;
 }
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 
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