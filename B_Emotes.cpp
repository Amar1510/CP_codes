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
 ll n,m,k;
 cin>>n>>m>>k;
 ll a[n];
 fi(0,n){
    cin>>a[i];
 }
 sort(a,a+n,greater<ll>());
 ll b = (a[0]*k + a[1])*(m/(k+1)) + (m%(k+1) * a[0]);
 cout<<b;


 
  return;
 }
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 
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