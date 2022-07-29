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
  ll a[n],b[n];
  fi(0,n){
    cin>>a[i];
    b[i]=a[i];
    // s.insert(a[i]);
  }
  sort(a,a+n);
  if(a[0]==a[1]){
    cout<<"Still Rozdil";
  }
  else{
    fi(0,n){
        if(b[i]==a[0]){
            cout<<i+1;
            return;
        }
    }
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



//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// /*████████████████████████████████████████████████████████████████████████████████████
// ██████████████████████████████████████████████████████████████████████████████████████
// ███████████████████████████▓▓▓▓▓▓▓▓▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓▓▓╬╬╬╬╬╬▓███████████████████████
// ███████████████████████████▓███████▓▓╬╬╬╬╬╬╬╬╬╬╬╬▓███▓▓▓▓█▓╬╬╬▓███████████████████████
// ███████████████████████████████▓█████▓▓╬╬╬╬╬╬╬╬▓███▓╬╬╬╬╬╬╬▓╬╬▓███████████████████████
// ████████████████████████████▓▓▓▓╬╬▓█████╬╬╬╬╬╬███▓╬╬╬╬╬╬╬╬╬╬╬╬╬███████████████████████
// ███████████████████████████▓▓▓▓╬╬╬╬╬╬▓██╬╬╬╬╬╬▓▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓███████████████████████
// ████████████████████████████▓▓▓╬╬╬╬╬╬╬▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓███████████████████████
// ███████████████████████████▓█▓███████▓▓███▓╬╬╬╬╬╬▓███████▓╬╬╬╬▓███████████████████████
// ████████████████████████████████████████▓█▓╬╬╬╬╬▓▓▓▓▓▓▓▓╬╬╬╬╬╬╬███████████████████████
// ███████████████████████████▓▓▓▓▓▓▓╬╬▓▓▓▓▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓███████████████████████
// ████████████████████████████▓▓▓╬╬╬╬▓▓▓▓▓▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓███████████████████████
// ███████████████████████████▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓███████████████████████
// █████████████████████████████▓▓▓▓▓▓▓▓█▓▓▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓███████████████████████
// █████████████████████████████▓▓▓▓▓▓▓██▓▓▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬████████████████████████
// █████████████████████████████▓▓▓▓▓████▓▓▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬████████████████████████
// ████████████████████████████▓█▓▓▓▓██▓▓▓▓██╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬████████████████████████
// ████████████████████████████▓▓███▓▓▓▓▓▓▓██▓╬╬╬╬╬╬╬╬╬╬╬╬█▓╬▓╬╬▓████████████████████████
// █████████████████████████████▓███▓▓▓▓▓▓▓▓████▓▓╬╬╬╬╬╬╬█▓╬╬╬╬╬▓████████████████████████
// █████████████████████████████▓▓█▓███▓▓▓████╬▓█▓▓╬╬╬▓▓█▓╬╬╬╬╬╬█████████████████████████
// ██████████████████████████████▓██▓███████▓╬╬╬▓▓╬▓▓██▓╬╬╬╬╬╬╬▓█████████████████████████
// ███████████████████████████████▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓╬╬╬╬╬╬╬╬╬╬╬██████████████████████████
// ███████████████████████████████▓▓██▓▓▓▓▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓██████████████████████████
// ████████████████████████████████▓▓▓█████▓▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓███████████████████████████
// █████████████████████████████████▓▓▓█▓▓▓▓▓███▓╬╬╬╬╬╬╬╬╬╬╬▓████████████████████████████
// ██████████████████████████████████▓▓▓█▓▓▓╬▓██╬╬╬╬╬╬╬╬╬╬╬▓█████████████████████████████
// ███████████████████████████████████▓▓█▓▓▓▓███▓╬╬╬╬╬╬╬╬╬▓██████████████████████████████
// ██████████████████████████████████████▓▓▓███▓▓╬╬╬╬╬╬╬╬████████████████████████████████
// ███████████████████████████████████████▓▓▓██▓▓╬╬╬╬╬╬▓█████████████████████████████████
// ██████████████████████████████████████████████████████████████████████████████████████
//  */






// #include<bits/stdc++.h>
// //#include<algorithm>
// #include<iostream>
// #include<vector>
// #include<string>
// //#include<map>
// //#include<stack>
// //#include<queue>
// //#include<string_view>
// #include<cmath>
// #define vi vector<int>
// #define vd vector<double>
// #define vs vector<string>
// #define ff first
// #define ss second
// #define ll long long int
// #define rep(i,a,b) for(int i=a ;i<b ;i++ )
// #define repr(i,a,b) for(int i=a;i>=b;i--)
// #define repll(i,a,b) for(ll i=a ;i<b ;i++ )
// #define reprll(i,a,b) for(ll i=a;i>=b;i--)
// #define pi pair<int,int>
// #define vpi vector<pi>
// #define vpll vector<pair<ll,ll> >
// #define Optimize {ios_base::sync_with_stdio(false);cin.tie(nullptr); cout.tie(nullptr);}
// #define vll vector<ll>
// #define ld  long double

// using namespace std;

// //const int INF = 0x3f3f3f3f;
// // void ddd(){
// //     ll te=-1,x=0;
// //         if(b>=a){
// //             cout<<b<<endl;
// //             continue;
// //         }
// //         if(c<=d){
// //             cout<<"-1"<<endl;
// //             continue;
// //         }
// //         if(b-d>=0){
// //         a-=(b-d);}
// //         te+=b;
// //         x=(ll)ceil(a/(c-d));
// //         te+=(x*(c-1));
// //         cout<<te<<endl;
// // }

// bool isPrime(ll n)
// {
//     if (n <= 1)
//         return false;
 
//     for (ll i = 2; i <= sqrt(n); i++)
//         if (n % i == 0)
//             return false;
 
//     return true;
// }

// bool isPresent(int val,stack<int> st){
//     while(!st.empty()){
//         int t=st.top();
//         st.pop();
//         if(t==val)
//         return true;
//     }
//     return false;
// }

// void dot(){

//     int n;cin>>n;
//     vector<pair<int,int> > a(n);
//     rep(i,0,n){
//         int t;
//         cin>>t;
//         a[i].first=t;
//         a[i].second=0;
//     }
//     int nw[n];
//     stack<int> diff;
//     rep(i,0,n){
//         rep(j,0,n){
//             if(a[j].second==0&&!isPresent(i-a[j].first,diff)){
//                 nw[i]=a[j].first;
//                 a[j].second=1;
//             }
//         }
//     }
//     rep(i,0,n){
//         cout<<nw[i]<<" ";
//     }
//     cout<<endl;
// }

// void bot1(){
//     int n,k;cin>>n>>k;
//     vi a(n);int mx=INT_MIN;
//     rep(i,0,n)cin>>a[i];
//     rep(i,0,n){
//         int e=0,s=0;
//         for(int j=i+1;j<n;j++){
//             if(abs(i-j)%k!=0){
//                 if(a[j]==1)
//                 e++;
//                 else
//                 s++;
//             }
//         }
//         for(int j=0;j<i;j++){
//             if(abs(i-j)%k!=0){
//                 if(a[j]==1)
//                 e++;
//                 else
//                 s++;
//             }
//         }
//         int df=abs(e-s);
//         mx=max(mx,df);
//     }
//     cout<<mx<<endl;
// }
// // if(r<d){
//     //     cout<<d<<endl;
//     //     return;
//     // }
// void bot2(){
//     ll l,r,d;cin>>l>>r>>d;
//     if(d<l||r<d){
//         cout<<d<<endl;
//         return;
//     }
//     if(r==d){
//         cout<<d+d<<endl;
//         return;
//     }
    
//     if(r>d){
//         ll t=r%d;
//         t=d-t;
//         cout<<r+t<<endl;
//         return;
//     }
// }
// void bot3(){
//     ll k;
//     int x;
//     cin>>k>>x;
//     cout<<9*k+x-9<<endl;
// }
// bool isVowel(char a)
// {
//     if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
//         return true;
//     return false;
// }
// void bot4(){
//     string s,t;
//     cin>>s;
//     cin>>t;
    
//     if(s.size()!=t.size()){
//         cout<<"No"<<endl;
//         return;
//     }
//     int f=1;
//     rep(i,0,s.size()){
//         if((isVowel(s[i]) && isVowel(t[i]))||(isVowel(s[i])==false&&isVowel(t[i])==false)){
//             continue;
//         }
//         f=0;
//         break;
//     }
//     if(f)
//         cout<<"Yes"<<endl;
//     else
//         cout<<"No"<<endl;
// }
// void bot5(){
//     int h1,h2,m1,m2;
//     scanf("%d:%d",&h1,&m1);
//     scanf("%d:%d",&h2,&m2);
//     int t=(h1+h2)*60+m1+m2;
//     printf("%02d:%02d",t/2/60,t/2%60);
// }
// void bot6(){
//     int n,p;
//     cin>>n>>p;
//     cout<<(2*n+1)+(n-1)+min(p-1,n-p)<<endl;
// }
// void bot7(){
//     int n;cin>>n;
//     vll a(n);
//     rep(i,0,n)cin>>a[i];
//     ll s=a[n-1];
//     ll x=a[n-1]-1;
//     if(s==1)
//     goto me;
//     for(int i=n-2;i>=0;i--){
//         if(a[i]>=x){
//             s+=x;
//             if(x==1)
//             break;
//             x=x-1;
//         }
//         else{
//             s+=a[i];
//             if(a[i]==1)
//             break;
//             x=a[i]-1;
//         }
//     }
//     me:
//     cout<<s<<endl;

// }
// void bot8(){
//     int n;cin>>n;int e=0,d=0;int a;
//     for(int i=1;i<=n;i++){
//     cin>>a;
//     e=max(e,a);
//     if(e==i)
//     d++;
//     }
//     cout<<d<<endl;;
// }
// void bot9(){
//     int n;cin>>n;
// 	vi ct(200001);
// 	rep(i,0,n){
// 		int x;
// 		cin>>x;
// 		++ct[x];
// 		if (ct[x]>2){
// 			cout<<"NO"<<endl;
// 			return;
// 		}
// 	}
	
// 	cout<<"YES"<<endl;
//     cout<<count(ct.begin(),ct.end(),2)<<endl;
// 	rep(i,0,200001){
// 		if(ct[i]==2){
// 			cout<<i<<" ";
// 			--ct[i];
// 		}
// 	}
// 	cout<<endl;
//     cout<<count(ct.begin(),ct.end(),1)<<endl;
// 	for (int i = 200000;i>=0;--i){
// 		if (ct[i]==1) {
// 			cout<<i<<" ";
// 			--ct[i];
// 		}
// 	}
// 	cout<<endl;
	
// 	assert(count(ct.begin(), ct.end(), 0) == 200 * 1000 + 1);
	
// }
// void bot1_0(){
//     int n,t;cin>>n>>t;
// 	int a=INT_MAX;
// 	int s,d,idx;
// 	rep(i,0,n){
// 		cin>>s>>d;
// 		while(s<t){
// 			s+=d;
// 		}
// 		if(a>s){
// 			a=s;
// 			idx=i+1;
// 		}
// 	}
// 	cout<<idx<<endl;
// }

// void smat1(){
//     int n;cin>>n;
//     string s;cin>>s;
//     // int c1=0,p1=0,ans=0;
//     // rep(i,0,n){
//     //     if(s[i]=='1')
//     //     p1=i, c1++;
//     // }
//     // p1++;
//     // if(n==1){
//     //     cout<<"1"<<endl;
//     //     return;
//     // }
//     // if(n==3&&c1>=1){
//     //     cout<<"6"<<endl;
//     //     return;
//     // }
//     // cout<<max(n,p1*2)<<endl;
//     // if(n==2&&c1>=1){
//     //     cout<<"4"<<endl;
//     //     return;
//     // }
//     // cout<<c0+(c1*2)<<endl;
    
// 	int mx=n;
// 	rep(i,0,n){
// 		if(s[i]=='1'){
// 	    mx=max(mx,2*max(i+1,n-i));
// 		}
// 	}
// 	cout<<mx<<endl;
// }
// ll gcd(ll a, ll b){
    
//     while(b){
//         a%=b;
//         swap(a,b);
//     }
//     return a;
// }

// void zesto8_1_1(){
//     ll cost=0,n;cin>>n;
// 	rep(i,0,n){
//         ll a;cin>>a;
// 		if(a<0)
//         cost-=min(cost,-a);
// 		else 
//         cost+=a;
// 	}
//     cout<<cost<<endl;
// }
// long long lcm(int a, int b)
// {
//     return (a / gcd(a, b)) * b;
// }



// void repof() {
//     int n; string s;cin>>n>>s;
// 	rep(i,0,n)
// 	if(s[i]=='4'||s[i]=='6'||s[i]=='8'||s[i]=='9'||s[i]=='1'){
// 			cout<<"1"<<endl<<s[i]<<endl;
// 			return;
// 		}
// 	rep(i,0,n)
// 		rep(j,i+1,n)
// 			if(!isPrime((s[i]-'0')*10+(s[j]-'0'))){
// 				cout<<"2"<<endl<<s[i]<<s[j]<<endl;
// 				return;
// 			}
// }
// void repog(){
//     ll n;string s1,s2;cin>>n;cin>>s1>>s2;
// 	ll cnt=0;
// 	rep(i,0,n){
// 		if((s1[i]=='0'&&s2[i]=='1')||(s1[i]=='1'&&s2[i]=='0')) 
//         cnt+=2;
// 		else if(s1[i]=='0'&& s2[i]=='0'){
// 			if(i<n-1 && s1[i+1]=='1'&&s2[i+1]=='1'){
//     			i++;
// 				cnt+=2;
// 			}
// 			else 
//             cnt++;
// 		}
// 		else{
// 			if(i<n-1 &&s1[i+1]=='0'&&s2[i+1]=='0'){
// 				cnt+=2;
// 				i++;
// 			}
// 		}
// 	}		 
//     cout<<cnt<<endl;
// }
// int computeXOR(int n)
// {
   
//   // If n is a multiple of 4
//   if (n % 4 == 0)
//     return n;
 
//   // If n%4 gives remainder 1
//   if (n % 4 == 1)
//     return 1;
 
//   // If n%4 gives remainder 2
//   if (n % 4 == 2)
//     return n + 1;
 
//   // If n%4 gives remainder 3
//   return 0;
// }
// void repoh(){
//     int a,b;cin>>a>>b;
//     int ans=computeXOR(a);
//     ans=ans^a;
//     if(ans == b)
//     cout<<a<<endl;
//     else if((ans^b)!=a)
//     cout<<a+1<<endl;
//     else
//     cout<<a+2<<endl;
// }
// void repoi(){
//     int n;string s;cin>>n>>s;
//     vi id;
//     rep(i,0,n) 
//     if (s[i]=='2')
//       id.push_back(i);
//     int k=id.size();
//     if(k==1||k==2){
//       cout<<"NO\n";
//       return;
//     }
//     vector<string> t(n, string(n, '='));
//     rep(i,0,n) 
//     t[i][i]='X';
//     rep(i,0,k){
//       int x=id[i],y=id[(i+1)%k];
//       t[x][y]='+';
//       t[y][x]='-';
//     }
//     cout<<"YES"<<endl;
//     for (int i = 0; i < n; ++i) 
//     cout<<t[i]<<endl;
// }
// void repoj(){
//     deque<int> dq;
//     int n;cin>>n;
// 	rep(i,1,n+1){
// 		int x;cin>>x;
// 		if(dq.size()==0) 
//         dq.push_back(x);
// 		else{
// 			if(x<dq.front()) 
//             dq.push_front(x);
// 			else 
//             dq.push_back(x);
// 		}
// 	}
// 	while(dq.size()){
// 		cout<<dq.front()<<" ";
// 		dq.pop_front();
// 	}
// 	cout<<endl;
// }
// void sipoa(){
//     int n;cin>>n;
//     int a[n];
// 	rep(i,0,n)cin>>a[i];
// 	sort(a,a+n);
// 	int m=n/2;
// 	if(a[0]==a[m-1]&&a[m]==a[n-1]&&a[0]!=a[m])
// 		cout<<"YES"<<endl<<a[0]<<" "<<a[m];
// 	else
// 		cout<<"NO"<<endl;
// }
// void sipob(){
//     int n,ans = 0;string a;
//     set<char> s;cin>>n>>a;
// 	rep(i,0,n){
// 		if(isupper(a[i])) 
//         s.clear();
// 		else{
// 			s.insert(a[i]);
// 			ans=max(ans,(int)s.size());
// 		}
// 	}
// 	cout<<ans<<endl;
// }
// void sipoc(){
//     int a[6];
//     rep(i,0,6)cin>>a[i];
//     sort(a,a+6);
//     do {
//         if(a[0]+a[1]+a[2]==a[3]+a[4]+a[5]){
//         cout<<"YES"<<endl;
//         return;
//         }
//     }
//     while(next_permutation(a,a+6));
//     cout<<"NO"<<endl;
// }
// void sipod(){
//     int n,maxn=INT_MIN,a,t[200005],minn=INT_MAX,ans;cin>>n;
//     memset(t,0x3f,sizeof(t));
// 	minn=n+1;
// 	rep(i,1,n+1){
// 		cin>>a;
// 		t[a]=i;
// 		maxn=max(maxn,a);
// 	}
// 	rep(i,0,maxn+1){
// 		if(t[i]<minn){
// 			minn=t[i];
// 			ans=i;
// 		}
// 	}
// 	cout<<ans<<endl;
// }
// void sipoe(){
//     ll n,k;cin>>n>>k;
//     vll a(k);
//     rep(i,0,k)cin>>a[i];
//     sort(a.begin(),a.end());
//     ll sum=0,ct=0;
//     repr(i,k-1,0){
//         sum+=(n-a[i]);
//         if(sum>=n)
//         break;
//         ct++;
//     }
//     cout<<ct<<endl;
// }
// void sipof(){
//     int n;cin>>n;
//     int a[n][5];
//     rep(i,0,n)
//     rep(j,0,5)cin>>a[i][j];
//     int c=0,d=0,e=0,h=0;
//     rep(i,0,4){
//         rep(j,i+1,5){
//             c=0;d=0;e=0;
//             rep(k,0,n){
//                 if(a[k][i]==1||a[k][j]==1)
//                 c++;
//                 if(a[k][i]==1)
//                 d++;
//                 if(a[k][j]==1)
//                 e++;
//             }
//             if(c==n && d>=n/2 && e>=n/2){
//                 h=1;
//                 goto my;
//             }
//         }
//     }
//     cout<<"NO"<<endl;
//     return;
//     my:
//     cout<<"YES"<<endl;
// }

// void cretg(){
//     int n;cin>>n;
//     vi a(n);
//     rep(i,0,n)cin>>a[i];
//     bool z = true;
//     int diff=a[1]-a[0];
//     rep(i,1,n){
//         if(diff!=a[i]-a[i-1]){
//         z=false;
//         break;
//         }
//     }
//     if(z!=true)
//     cout<<a[n-1]<<endl;    
//     else
//     cout<<a[n-1]+diff<<endl;
// }
// void creth(){
//     int n;cin>>n;
//     vi a(n);
//     rep(i,0,n)cin>>a[i];
//     if((n%2==1)&&(a[0]%2==1)&&(a[n-1]%2==1)) 
//     cout<<"Yes"<<endl; 
//     else 
//     cout<<"No"<<endl;
// }
// void creti(){
//     ld n,h,w;
// 	ll p;cin>>n;
// 	w=ceil(sqrt(n));
// 	h=ceil(n/w);
// 	p=2*(h+w);
// 	cout<<p<<endl;
// }
// void cretj(){
//     int n,x;cin>>n>>x;
// 	int ans=x;
// 	rep(i,0,n){
//         int a;cin>>a;
// 		if(a==x)
//         ans++;
// 		if(a<x)
//         ans--;
// 	}
// 	cout<<ans<<endl;
// }
// void cretk(){
//     int n,k=0;cin>>n;
//     k=log2(n-1);
//     int c=1<<k;
//     repr(i,n-1,c)cout<<i<<" ";
//     rep(i,0,c)cout<<i<<" ";
//     cout<<endl;
// }
// void cretl(){
//     int n,k;cin>>n>>k;
// 	if(k==1){
// 		cout<<"YES"<<endl;
// 		rep(i,1,n+1)
// 		cout<<i<<endl;
// 		return;
// 	}
// 	else{
// 		if(n%2!=0){
// 			cout<<"NO"<<endl;
// 			return;
// 		}
// 		else{
// 			cout<<"YES"<<endl;
// 			int j=1,f=2,i;
// 			for(i=1;i<=n;i++){
// 				for(int h=1;h<=k;h++){
// 					if(i%2!=0){
// 					cout<<j<<" ";
// 					j+=2;
// 				    }
// 					else{
// 						cout<<f<<" ";
// 						f+=2;
// 					}
//                 }
// 			    cout<<endl;		
// 			}
// 		}
// 	}
// }
// void nestai(){
//     int n;cin>>n;vi a(n);int mx=INT_MIN;
//     rep(i,0,n){
//         cin>>a[i];
//         mx=max(mx,a[i]);
//     }int ans=INT_MAX,i;int num;
//     for(i=1;i<=mx;i++){
//         int diff=0;
//         rep(j,0,n){
//             if(a[j]==i||a[j]-1==i||a[j]+1==i)
//             continue;
//             diff+=(abs(a[j]-i)-1);
//         }
//         if(ans>diff){
//             ans=diff;
//             num=i;
//         }
//     }
//     cout<<num<<" "<<ans<<endl;
// }
// void nestbi(){
//     int n,k;string s;
//     cin>>n>>k>>s;
//     int b[26]={};
//     rep(i,0,n){
//     int c=1;
//     while(c<k&&s[i]==s[i+1])c++,i++;
    
//     if(c==k)   
//     b[s[i]-'a']++;
    
//     }
//     int mx=*max_element(b,b+26);
//     cout<<mx<<endl;
// }
// void nestci(){
//     int n,x;cin>>n;
// 	vi a(n);
// 	rep(i,0,n)cin>>a[i];
// 	sort(a.begin(),a.end());
// 	int ans=a[n-1];int y;
// 	for(int i=n-1;i>0;i--){
// 		if(a[i]==a[i-1]){
// 			y=a[i];
// 			break;
// 		}
// 		else if(ans%a[i]!=0){
// 			y=a[i];
// 			break;
// 		}
// 	}
// 	cout<<ans<<" "<<y<<endl;
// }
// void nestdi(){
//     int n;cin>>n;
//     vll a(n);ll mx=-1;
//     rep(i,0,n){
//         cin>>a[i];
//         mx=max(mx,a[i]);
//     }int ans=0;int len=0;
//     rep(i,0,n){
//         if(a[i]==mx){
//             len++;
//         }
//         else{
//             len=0;
//         }
//         ans=max(ans,len);
//     }
//     cout<<ans<<endl;
// }
// void nestei(){
//     int n;cin>>n;
//     vi v(n+1);
//     int i;
//     for(i=1;i<=n;i++)cin>>v[i];
//     int sol=INT_MIN;
//     for(i=1;i<=n;i++){
//         if(v[1]!=v[i])
//             sol=max(sol, i-1);
//         if(v[i]!=v[n])
//             sol=max(sol, n-i);
//     }
//     cout<<sol<<"\n";
 
// }
// void nestfi(){
//     int n,m,k;
//     cin>>n>>m>>k;vi p(n),s(n);
//     rep(i,0,n)cin>>p[i];
//     rep(i,0,n)cin>>s[i];
//     int ans=0;
//     rep(i,0,k){
//         int c;cin>>c;
//         rep(j,0,n){
//             if(s[j]==s[c-1] && p[j]>p[c-1]){
//                 ans++;
//                 break;
//             }
//         }
//     }
//     cout<<ans<<endl;
// }
// void nestgi(){
//     int c1,c2,c3,c4;cin>>c1>>c2>>c3>>c4;
//     if((c1==0&&c3)||c1!=c4)
//     cout<<"0"<<endl;
//     else
//     cout<<"1"<<endl;
// }
// void nesthi(){
//     string s;cin>>s;
//     int i=s.size()-1;string t="";
//     while(s[i]!='a'&&i>=0){
//         t=s[i]+t;
//         i--;
//     }
//     if(t==""){
//         rep(i,0,s.size()){
//             if(s[i]!='a'){
//                 cout<<":("<<endl;
//                 return;
//             }
//         }
//         cout<<s<<endl;
//         return;
//     }
//     s=s.erase(s.find(t));
//     string t1="";
//     rep(i,0,s.size()){
//         if(s[i]!='a')
//         t1=t1+s[i];
//     }
//     if(t1==t)
//     cout<<s<<endl;
//     else
//     cout<<":("<<endl;
// }
// void nesthi1(){
//     string s;cin>>s;int n=s.length();
//     string t,res=":(";
//     rep(i,0,n){
//         if(s[i]!='a')t+=s[i];
//         if(t.length()==n-i-1){
//             if(t==s.substr(i+1)){
//             res=s.substr(0,i+1);
//             }
//         }
//     }
//     cout<<res<<'\n';
// }
// void nesthj1(){
//     int n;cin>>n;
// 	int ans=n>9?10:9;
// 	while(n>9){
// 		ans+=(9-n%10);
// 		n/=10;
// 	}
// 	cout<<ans<<endl;
// }

// void nerd1(){
//     ll n;cin>>n;
//     int m=0;
//     while(n>9){
//         n-=9;
//         m+=9+n%10;
//         n/=10;
//     }
//     cout<<m+n<<endl;
// }
// void nerd2(){
//     int L,v,l,r;cin>>L>>v>>l>>r;
//     cout<<L/v-r/v+(l-1)/v<<endl;
// }
// void nerd3(){
//     int n,k;cin>>n>>k;
//     vi a(n);int s=0;
//     rep(i,0,n) cin>>a[i], s+=a[i];
//     if(s%k!=0){
//         cout<<"No"<<endl;
//         return;
//     }
//     s/=k;
//     int ct=0;
//     vi ans;int st=0;
//     rep(i,0,n){
//         st+=a[i];
//         ct++;
//         if(st<s)
//         continue;
//         if(st==s){
//             ans.push_back(ct);
//             ct=0;
//             st=0;
//         }
//         else{
//             cout<<"No"<<endl;
//             return;
//         }
//     }
//     cout<<"Yes"<<endl;
//     rep(i,0,ans.size()) cout<<ans[i]<<" ";
//     cout<<endl;
// }
// void nerd4(){
//     int n,k,y;cin>>n>>k;
//     y=k-1;
//     while(n%y!=0){
//         y--;
//     }
//     cout<<(n/y)*k+y<<endl;
// }
// void nerd5(){
//     double n,s;cin>>n;
//     s=sqrt(n);
//     cout<<ceil(2*s)<<endl;
// }
// void nerd6(){
//     string s;int n,x,y;
//     cin>>n>>x>>y>>s;
//     int ct1=0,ct2=0;
//     repr(i,n-1,n-x){
//         if(s[i]=='1'&&i!=n-y-1)
//         ct1++;
//     }
//     if(s[n-y-1]=='0')
//     ct2=1;
//     cout<<ct1+ct2<<endl;
// }
// void print(int r,int c){
//     string st="aeiou";
// 	rep(i,0,r){
// 		rep(j,0,c){
// 			cout<<st[(j%5+i%5)%5];
// 		}
// 	}
// }
// void nerd7(){
//     int n;cin>>n;
// 	for(int i=5;i*i<=n;i++){
// 		if (n%i==0){
// 			print(i,n/i);
// 			return;
// 		}
// 	}
// 	cout<<"-1\n";
// 	return;
// }
// void nerd8(){
//     int n,i,ans;cin>>n;
//     ans=n/2+1;
//     cout<<ans<<endl;
//     for(i=1;i<=ans;++i) 
//     cout<<i<<" "<<"1"<<endl;
//     for(i=2;i<=n-ans+1;++i) 
//     cout<<ans<<" "<<i<<endl;
// }
// void nerd9(){
//     int n;cin>>n;
// 	int hs2=0,hs1=0,hs0=0,mn;
// 	rep(i,0,n){
//         int a;cin>>a;
// 		if(a%3==2) 
//         hs2++;
// 		else if(a%3==1)
//         hs1++;
//         else
//         hs0++;
// 	}
// 	mn=min(hs2,hs1);
// 	cout<<hs0+mn+(hs2-mn)/3+(hs1-mn)/3<<endl;
// }
// void nerd1_1_0(){
//     int n;cin>>n;
// 	vi a(n);
// 	rep(i,0,n) cin>>a[i];
// 	sort(a.begin(),a.end());
// 	if(a[n-1]<a[n-2]+a[n-3]){
// 		cout<<"YES"<<endl;
// 		swap(a[n-2],a[n-1]);
// 		rep(i,0,n) cout<<a[i]<<" ";
//         cout<<endl;
// 	}else{
// 		cout<<"NO"<<endl;
// 	}
// }
// void ttt1(){
//     ll a1,b1,a2,b2,a3,b3;cin>>a1>>b1>>a2>>b2>>a3>>b3;
//     if(b1==b2&&b1!=0&&b1>b3){
//         if(a1>=a2){
//             cout<<setprecision(9)<<a1-a2<<endl;
//         }
//         else{
//             cout<<setprecision(9)<<a2-a1<<endl;
//         }
//         return;
//     }
//     if(b2==b3&&b2!=0&&b2>b1){
//         if(a2>=a3){
//             cout<<setprecision(9)<<a2-a3<<endl;
//         }
//         else{
//             cout<<setprecision(9)<<a3-a2<<endl;
//         }
//         return;
//     }
//     if(b1==b3&&b1!=0&&b1>b2){
//         if(a1>=a3){
//             cout<<setprecision(9)<<a1-a3<<endl;
//         }
//         else{
//             cout<<setprecision(9)<<a3-a1<<endl;
//         }
//         return;
//     }
    
//     ld f=0;
//     cout<<setprecision(9)<<f<<endl;
// }
// void ttt2(){
//     int n;cin>>n;
//     set<ll> a;
//     rep(i,0,n){
//         ll t;cin>>t;
//         a.insert(t);
//     }
//     int x = a.size();
//     rep(i,0,n){
//         if(i<=x-1){
//             cout<<x<<" ";
//         }
//         else{
//             x++;
//             cout<<x<<" ";
//         }
//     }
//     cout<<endl;
// }
// bool isPresentinSet(deque<ll> a,ll num,int x){
//     deque<ll> ::iterator it;int flag =0;
//     for(it=a.begin();it!=a.end();it++){
//         if((num)*x==*it||(num/x)==*it||(x/num)==*it||num==*it){
//             a.erase(it,it+1);
//             it=a.begin();
//             flag=1;
//         }
        
//     }
//     if(flag)
//     return true;
//     else
//     return false;
// }
// void ttt3(){
//     int n,x;cin>>n>>x;
//     deque<ll> a;
//     rep(i,0,n){
//         ll t;cin>>t;
//         if(isPresentinSet(a,t,x)){
//             continue;
//         }
//         else{
//             a.push_back(t);
//         }
//     }
//     cout<<a.size()<<endl;
// }

// void tinkle1_1_0(){
//     int n,m;cin>>n>>m;
// 	int r=0;
// 	rep(i,0,n){
// 		int a,b;
// 		cin>>a>>b;
// 		if(r>=a)
// 		r=max(r,b);
// 	}
// 	if(r>=m)
// 	cout<<"YES"<<endl;
// 	else
// 	cout<<"NO"<<endl;
// }
// void tinkle2(){
//     int n;cin>>n;
//     int inf=0x3f3f3f3f;
// 	int p=inf;
//     vi a(n);
// 	rep(i,0,n){
//         cin>>a[i];	
// 	    if(a[i]<p)
// 	    p=a[i];
// 	}
// 	int sum=inf,k=-inf;
// 	rep(i,0,n){
// 		if(a[i]==p){
// 		sum=min(sum,i-k);
// 		k=i;	
// 		}
// 	}
// 	cout<<sum<<endl;
// }
// void tinkle3(){
//     int k=0,p;cin>>p;
//     ll n=1;
//     while(k<=p){
//         ll n1=n,sum=0;
//         while(n1>0){
//         sum+=n1%10;
//         n1/=10;
//         }
//         if(sum==10){
//         k++; 
//         }
//         if(k==p){
//         cout<<n;
//         return;
//         }
//         n++;
//     }
// }
// void tinkle4(){
//     int n,s,k;cin>>n>>s>>k;
// 	set <int> se;
// 	rep(i,0,k){
//         int a;cin>>a;
//         se.insert(a);
//     }
//     int x;
// 	for(x=0;x<=k;x++){
// 	    if(s-x>=1&&se.find(s-x)==se.end())
// 	    break;
// 	    if(s+x<=n&&se.find(s+x)==se.end())
// 	    break;    
// 	}
// 	cout<<x<<endl;
// }
// bool checkIsPres(string s,vector<string> a){
//     string t="";
//     repr(i,s.size()-1,0){
//         t=t+s[i];
//     }
//     rep(i,0,a.size()){
//         if(a[i]==t)
//         return true;
//     }
//     return false;
// }
// bool isPalindrome(string s){
//     string t="";
//     repr(i,s.size()-1,0){
//         t=t+s[i];
//     }
//     if(t==s)
//     return true;
//     return false;
// }
// string printPal(vector<string> a){
//     int idx=-1,l=0;
//     rep(i,0,a.size()){
//         if(a[i].length()>l){
//             l=a[i].length();
//             idx=i;
//         }
//     }
//     return a[idx];
// }
// void tinkle5(){
//     int n,m;cin>>n>>m;
//     vector<string> a(n);
//     vector<string> pal;
//     vector<string> ans;
//     string aaa="";
//     rep(i,0,n){
//         string s;cin>>s;
//         a.push_back(s);
//         if(isPalindrome(s)){
//             pal.push_back(s);
//             continue;
//         }
//         if(checkIsPres(s,a)){
//             ans.push_back(s);
//         }
//     }
//     //int s=0;
//     rep(i,0,ans.size()){
//         aaa=aaa+ans[i];
//     }
//     //s*=2;
//     if(pal.size()>0)
//     aaa=aaa+printPal(pal);
//     // int ml=-1;
//     // string rev="";
//     // rep(i,0,pal.size()){
//     //     string s=pal[i];
//     //     if(s.size()>ml){
//     //         ml=s.size();
//     //         rev=s;
//     //     }
//     // }
//     // s+=ml;
//     // cout<<rev;
//     // cout<<pal[0];
//     repr(i,ans.size()-1,0){
//         repr(j,ans[i].size()-1,0){
//             aaa=aaa+ans[i][j];
//         }
//     }
//     cout<<aaa.size()<<endl<<aaa<<endl;
// }
// void ziko1(){
//     string x;cin>>x;
//     int c=0;
//     int p=0;
//     int mx=0;
//     rep(i,0,x.size()-1){
//         if (x[i]=='V' && x[i+1]=='K'){
//         c++;
//         i++;
//         }
//         else{
//         if((x[i]=='V'&&x[i+1]=='V'&&x[i+2]!='K')||(x[i]=='K'&&x[i+1]=='K'))
//         p++;
//         }
//     }
//     if(p)
//     c++; 
//     cout<<c<<endl;
// }
// void ziko2(){
//     int n;cin>>n;
//     vi a(n);int s=0;
//     rep(i,0,n) cin>>a[i],s+=a[i];
//     int m;cin>>m;
//     vpi inter(m);
//     rep(i,0,m) cin>>inter[i].ff>>inter[i].ss;
//     rep(i,0,m){
//         if(inter[i].ff<=s&&inter[i].ss>=s){
//             cout<<s<<endl;
//             return;
//         }
//         if(inter[i].ff>=s){
//             cout<<inter[i].ff<<endl;
//             return;
//         }
//     }
//     cout<<"-1"<<endl;
// }
// void ziko3(){
//     int x=0,n;string s;cin>>n>>s;
//     rep(i,0,n){
//         if(s[i]=='1')
// 	    x=x+1;
// 	    else{
// 	 	cout<<x;
//         x=0;
//         }
//     }
//     cout<<x<<endl;
// }
// void ziko4(){
//     string s;int v[27]={0},vis[2600]={0};
//     int n,k;cin>>n>>k;cin>>s;
// 	rep(i,0,n){
// 		v[s[i]]++;
// 	}
//     int t=0;
// 	rep(i,0,n){
// 		if(vis[s[i]]==0)
//         t++;
// 		vis[s[i]]=1;
// 		if(t>k){
// 			cout<<"YES"<<endl;
// 			return;
// 		}
// 		v[s[i]]--;
// 		if(v[s[i]]==0)
//         t--;
// 	}
// 	cout<<"NO"<<endl;
// }
// void ziko5(){
//     int k;
// 	string n;cin>>k;cin>>n;
//     int cnt[10]={0};
// 	sort(n.begin(), n.end());int sum=0;
// 	rep(i,0,n.size()){
// 		sum+=(n[i]-'0');
// 		cnt[n[i]-'0']++;
// 	}
//     int an=0;
// 	rep(i,0,9)
// 	rep(j,0,cnt[i]){
// 	    if(sum<k){
// 			an++;
// 			sum+=(9-i);
// 		}
// 	}
// 	cout<<an<<endl;
// }
// void ziko6(){
//     ll n;cin>>n;
// 	repll(i,0,n){
// 		ll j;cin>>j;
// 		if(j%2!=0){
// 			cout<<"First"<<endl;
// 			return;
// 		}
// 	}
// 	cout<<"Second"<<endl;
// }
// void ziko7(){
//     int r,d,n;
//     cin>>r>>d>>n;
//     int sum=0;
// 	for(int i = 1;i<=n;i++){
//         int x,y,rr;
// 		cin>>x>>y>>rr;
// 		double k = sqrt(x*x+y*y);
// 		if(((k+rr)<=r)&&((k-rr)>=(r-d))) 
//         sum++;
// 	}
// 	cout<<sum<<endl;
// }
// void ziko8(){
//     int n;cin>>n;
// 	vi arr(2*n);
// 	rep(i,0,2*n) cin>>arr[i];
// 	sort(arr.begin(),arr.end());
// 	if(arr[n]==arr[n-1])
// 		cout<<"NO"<<endl;
// 	else
// 		cout<<"YES"<<endl;
// }
// void ziko9(){
//     ll n,k;cin>>n>>k;ll mod=1;
//     while(k--)
//     mod*=10;
//     for(ll i=1; ;i++){
//         if((n*i)%mod==0){
//             cout<<n*i<<endl;
//             return;
//         }
//     }
// }
// void ziko1_0(){
//     cout<<"Karen"<<endl;
// }
// void ziko1_1(){
//     ll a,b,c=1;cin>>a>>b;
//     for(a++;a<=b&&c;a++)c*=a%10,c%=10;
//     cout<<c;
// }
// void ziko1_2(){
//     string s;cin>>s;
// 	int sum=0;
// 	rep(i,0,s.size()){
// 		if(s.substr(i,5) == "Danil"||s.substr(i,4) == "Olya"||s.substr(i,5) == "Slava"||s.substr(i,3) == "Ann"||s.substr(i,6) == "Nikita")
// 		sum++;
// 	}
// 	if(sum==1)
//     cout<<"YES";
// 	else 
//     cout<<"NO";
// }
// void ziko1_3(){
//     int x1,x2,y1,y2;cin>>x1>>y1>>x2>>y2;
//     if(y1==y2)y1++;
//     if(x1==x2)x1++;
//     int ans=abs(x1-x2)+abs(y1-y2)+2;
//     cout<<ans*2;
// }
// void ziko1_4(){
//     int n,x,a,k=0;
// 	cin>>n>>x;
// 	rep(i,0,n){
// 	cin>>a;
// 	k+=a;
// 	}
// 	if(x-k==n-1)
// 	cout<<"YES";
//     else 
//     cout<<"NO";
// }
// void ziko1_5(){
//     int n,a,b;
// 	cin>>n>>a>>b;
// 	for(int x=0;x*a<=n;x++)
// 		if((n-x*a)%b==0){
// 			cout<<"YES\n"<<x<<" "<<(n-x*a)/b<<endl;
// 			return;
// 		}
// 	cout<<"NO\n";
// }
// void nento1(){
//     int x,y;cin>>x>>y;
//     if(x==y){
//         cout<<x-1<<" "<<y<<endl;
//         return;
//     }
//     if(x>y){
//         cout<<x-1<<" "<<y<<endl;
//         return;
//     }
//     if(x==1){
//         cout<<x-1<<" "<<y<<endl;
//         return;
//     }
//     cout<<x-1<<" "<<y<<endl;
// }
// void nento2(){
//     ll a,b,c;cin>>a>>b>>c;
//     ll s=0;s+=a+b+c;
//     a-=min(a,min(b,c));b-=min(a,min(b,c));c-=min(a,min(b,c));s-=c;s-=(3*a);
//     s=s%7;s=7-s;
//     //cout<<s<<endl;
//     s--;
//     if(s%3==0){
//         cout<<"YES"<<endl;
//     }
//     else 
//     cout<<"NO"<<endl;
// }
// void nento2_cr(){
//     int a,b,c;
//     cin>>a>>b>>c;
//     int d=a+b+c;
//     if(d%9==0&&d!=0&&a>=d/9&&b>=d/9&&c>=d/9){cout<<"YES";}else cout<<"NO";
//     cout<<endl;
// }
// void nento3(){ 
//     ll n,x;cin>>n>>x;ll a[n];
// 	rep(i,0,n) cin>>a[i];
// 	ll ans=accumulate(a, a+n, 0LL);
// 	for(ll div=x,flag = 1;flag; div*=x){
// 		for(int i=0;i<n&&flag;i++){
// 			if(a[i]%div==0)
// 			ans+=a[i];
// 			else
// 			flag=0;
//         }
//     }
// 	cout<<ans<<"\n";
// }
// void nento4(){
//     int n;cin>>n;
//     vll a(n);
//     rep(i,0,n) cin>>a[i];
//     vll dp(n);
//     repr(i,n-1,0){
//         ll j=i+a[i];
//         dp[i]=a[i];
//         if(j<n){
//             dp[i]+=dp[j];
//         }
//     }
//     cout<<*max_element(dp.begin(),dp.end())<<endl;
// }
// int nento5(int a ,int d){
//     if(a>=10*d)
//     return 1;
//     while(a>=d){
//         if(a%10==d) 
//         return 1;
//         a-=d;
//     }
//     return 0;
// }
// void nento6(){
//     int n,k;cin>>n>>k;
// 	vi a(n);
// 	rep(i,0,n)cin>>a[i];
// 	int mx=*max_element(a.begin(),a.end());
// 	if(n*mx<k){
// 	cout<<-1<<'\n';
// 	return;
// 	}
// 	int ans=n+1;
// 	for(int b=0;b<k;b++){
// 	    int to=-2;
// 		for(int i=0;i<n-1;i++){
// 			if(a[i]<a[i+1]){
// 			to=i;
// 			break;
// 			}
// 		}
// 		ans=to+1;
// 		if(to == -2)break;
// 		a[to]++;
// 	}
// 	cout<<ans<<'\n';
// }
// //const ll N=1000000000000L;
// //set<ll> cubes;
// // void precalc(){
// //     for(ll i = 1; i * i * i <= N; i++){
// //         cubes.insert(i * i * i);
// //     }
// // }

// // void nento7() {
// //   ll x;
// //   cin>>x;
// //   for (ll i=1;i*i*i<=x;i++){
// //     if(cubes.count(x-i*i*i)){
// //       cout<<"YES\n";
// //       return;
// //     }
// //   }
// //   cout<<"NO\n";
// // }
// void nento8(){
//     int n;cin>>n;
// 	int arr[n],mx[n];
// 	rep(i,0,n){
// 		cin>>arr[i];
// 		if(i==0)
// 		mx[0]=arr[0];
// 		else
// 		mx[i]=max(mx[i-1],arr[i]);
// 	}
// 	int j=n-1;
// 	repr(i,n-1,0){
// 		if(arr[i]==mx[i]){
// 			for(int k=i;k<=j;k++)
// 				cout<<arr[k]<<" ";
// 			j=i-1;
// 			}
// 	}
// 	cout<<endl;

// }
// void nento9(){
//     map<int,int>mp;
//     int n,k;
//     cin>>n>>k;int mx=0;int l;
//     rep(i,0,n){
//         cin>>l; mp[l]=1;
//         mx=max(mx,l);
//     }
//     rep(i,0,n+1)
//     if(mp[i]==0){
//         l=i; 
//         break;
//         }
//     if(k==0) 
//     cout<<n<<endl;
//     else if(l==n) 
//     cout<<n+k<<endl;
//     else if(mp[((l+mx+1)/2)]==0) 
//     cout<<n+1<<endl;
//     else 
//     cout<<n<<endl;
// }
// void nento1_0(){
//     int n,k;cin>>n>>k;
//     string s;cin>>s;
//     int l=0;int r=n-1;
//     while(s[l]=='.') 
//     l++;
//     while(s[r]=='.') 
//     r--;
//     int c=1;int i;
//     for(i=l;i<r;i+=k)
//     {
//       while(s[i]=='.') 
//       i--;
//       c++;
//     }
//     cout<<c<<endl;
// }
// void taco1(){
//     int n;cin>>n;
//     string s;cin>>s;
//     vi t, m;
//     rep(i,0,n){
//         if(s[i]=='T')
//         t.push_back(i);
//         else
//         m.push_back(i);
//     }
//     if(t.size()!=2*m.size()){
//         cout<<"NO"<<endl;
//         return;
//     }
//     rep(i,0,m.size()){
//         if(m[i]<t[i]||m[i]>t[i+m.size()]){
//             cout<<"NO"<<endl;
//             return;
//         }
//     }
//     cout<<"YES"<<endl;
// }
// void taco2(){
//     int a,b,c;cin>>a>>b>>c;
//     a=pow(10,a-1)+pow(10,c-1);
//     b=pow(10,b-1);
//     cout<<a<<" "<<b<<endl;
// }
// void taco3(){
//     int n,q;
// 	cin>>n>>q;
// 	int a[51]={0};
// 	rep(i,0,n){
// 		int g;cin>>g;
// 		if(a[g]==0) 
//         a[g]=i+1;
// 	}
// 	rep(i,0,q){
// 		int h;cin>>h;
// 		cout<<a[h]<<" ";
// 		rep(j,1,51){
// 			if(a[j]<a[h]) 
//             a[j]++;
// 		}
// 		a[h]=1;
// 	}
// }
// void taco4(){
//     int n;cin>>n;
//     vi arr(n);
//     rep(i,0,n)cin>>arr[i];
//     cout<<(n*3)<<endl;
//     for(int i=0;i<=n-1;i=i+2){
//         int temp=3;
//         while(temp--){
//         cout<<"2 "<<i+1<<" "<<i+2<<endl;
//         cout<<"1 "<<i+1<<" "<<i+2<<endl;
//         }
//     }
// }
// void taco5(){
//     int n;cin>>n;vi a(n); rep(i,0,n) cin>>a[i];
//     int p=n-1;sort(a.begin(),a.end());
//     rep(i,0,p){
// 		if(a[i+1]-a[i]<a[p]){
//     	p--;i--;
//     	}
// 	}
//     cout<<p+1<<endl;
// }
// void taco6(){
//     int n;cin>>n;vi a(n+2,0);
// 	for(int i=1;i<=n;i++)cin>>a[i];
//     ll ans=0;
// 	for(int i=1;i<=n+1;i++)
//     ans+=abs(a[i]-a[i-1]);
//     ll cnt=0;
// 	for(int i=1;i<=n;i++)
// 	    if(a[i]>a[i-1]&&a[i]>a[i+1])
//         cnt+=a[i]-max(a[i-1],a[i+1]);
// 	cout<<ans-cnt<<endl;
// }
// void taco7(){
//     int n,k;
// 	cin>>n>>k;int ans=0;
// 	rep(i,0,n){
// 		int a;
// 		cin>>a;
// 		ans+=(a-1)/k+1;
// 	}
// 	cout<<(ans+1)/2<<endl;
// }
// // void taco8(){
// //     ll n;
// // 	cin>>n;
// // 	vi v(n);
// // 	repll(i,0,n)cin>>v[i];
// // 	sort(v.begin(),v.end());
// // 	map<ll,ll> mp;
// // 	repll(i,1,n){
// // 		int val=(v[i]-v[i-1]);
// // 		mp[val]++;
// // 	}
// // 	for(auto e:mp){
// // 		cout<<e.first<<" "<<e.second<<endl;
// // 		return;
// // 	}
// // }
// // void taco9(){
// //     ll n,k;cin>>n>>k;
// // 	vll v;
// //     ll d=2;
// // 	while(d<=n&&k){
// // 		if(k==1) 
// //         d=n;
// // 		if(n%d==0)
// // 		n/=d,v.push_back(d),k--;
// // 		else
// // 		d++;
// // 	}
// // 	if(k==0)
// // 	for(int i: v) 
// //         cout<<i<<" ";
// // 	else
// // 	cout<<-1;
// // }
// void taco1_1(){
//     int n,t,k,d;cin>>n>>t>>k>>d;
//     cout<<((n-1)/k*t>d?"YES":"NO");
// }
// void ngu1(){
//     string s;cin>>s;
//     int r,g,b,y;
//     int ans[4]={0};
//     rep(i,0,s.size()){
//         if(s[i]=='R')
//         r=i%4;
//         else if(s[i]=='B')
//         b=i%4;
//         else if(s[i]=='G')
//         g=i%4;
//         else if(s[i]=='Y')
//         y=i%4;
//         else
//         ans[i%4]++;
//     }
//     cout<<ans[r]<<" "<<ans[b]<<" "<<ans[y]<<" "<<ans[g]<<endl;
// }
// void ngu2(){
//     char ref = 'a';
// 	char x;
// 	bool end = false;
// 	while(!end && cin>>x){
// 		if(x > ref) 
//         end=true;
// 		else if(x==ref) 
//         ++ref;
// 	}
// 	if(end) 
//     cout << "NO" << endl;
// 	else 
//     cout << "YES" << endl;
// }
// void ngu3(){
//     int n;cin>>n;
//     int a[1000009]={0};
//     int t=n;
//     while(n--){
//         int x;cin>>x;
//         a[x]++;
//         while(a[t]){
//             cout<<t<<" ";
//             t--;
//         }
//         cout<<endl;
//     }
// }
// void ngu4(){
//     string s;cin>>s;
//     int k;cin>>k;int z=0;int p=0;
//     if(k>=s.size()){
//         if((s.find("0")>=0&&s.find("0")<s.size())||(s.find("1")>=0&&s.find("1")<s.size()))
//         cout<<s.size()-1<<endl;
//         else
//         cout<<s.size()<<endl;
//         return;
//     }
//     repr(i,s.size()-1,0){
//         if(s[i]=='0')
//         z++;
//         p++;
//         if(z>=k){
//             break;
//         }
//     }
//     if(z>=k)
//     cout<<p-z<<endl;
//     else{
//         if((s.find("0")>=0&&s.find("0")<s.size())||(s.find("1")>=0&&s.find("1")<s.size()))
//         cout<<s.size()-1<<endl;
//         else
//         cout<<s.size()<<endl;
//         return;
//     }
// }
// void ngu5(){
//     ll n,m,x=INT_MAX,y=INT_MIN,b=INT_MAX,a=INT_MIN;
//     cin>>n;int t,z;
//     rep(i,0,n) {cin>>t>>z;if(x>z) x=z; if(a<t) a=t;}
//     cin>>m;
//     rep(i,0,m) {cin>>t>>z;if(y<t) y=t; if(b>z) b=z;}
//     if(y-x>=0||a-b>=0)
//     cout<<max(y-x,a-b)<<endl;
//     else
//     cout<<"0"<<endl;
// }
// void ngu6(){
//     int n,m;cin>>n>>m;
//     map<string, int> M;
//     string a[n+1];
//     rep(i,1,n+1){
//         cin>>a[i];
//         for(int j=1;j<m;j+=2){
//             a[i][j]='Z'-a[i][j]+'A';
//         }
//         M[a[i]] = i;
//     }
//     sort(a+1,a+n+1);
//     rep(i,1,n+1){
//         cout<<M[a[i]]<<" ";
//     }
//     cout<<endl;
// }
// void ngu7(){
//     ll a,b,c,m;cin>>a>>b>>c>>m;
//     vll v(3);v[0]=a;v[1]=b;v[2]=c;
//     if(m>(a+b+c-3)){
//         cout<<"NO"<<endl;
//         return;
//     }
//     if(m==1){
//         if(a>1||b>1||c>1)
//         cout<<"YES"<<endl;
//         else
//         cout<<"NO"<<endl;
//         return;
//     }
    
//         sort(v.begin(),v.end());
//         if(v[2]-1>v[0]+v[1]){
//             cout<<"NO"<<endl;
//         }
//         else{
//             cout<<"YES"<<endl;
//         }
//         return;
    

// }
// void ngu7_1(){
//     int a, b, c, m;cin>>a>>b>>c>>m;
//     if(a+b+c-3>=m && max(0,max(a,max(b,c)))*2-a-b-c-1<=m) cout<<"YES\n";
//         else 
//         cout<<"NO\n";
// }
// void ngu8(){
//     int n,m;cin>>n>>m;
//     vll a(n*m);
//     rep(i,0,n*m)
//     cin>>a[i];int count=0;
//     rep(i,0,n*m){
//         rep(j,0,i){
//             if(a[i]>a[j])
//             count++;
//         }
//     }
//     cout<<count<<endl;
// }
// void ngu9(){
//     int n,k;cin>>n>>k;vll a(n);rep(i,0,n) cin>>a[i];int p=0;
//     rep(i,0,n-1){
//         if(a[i]-a[i+1]<=0){
//             continue;
//         }
//         p++;
//     }
//     if(a[n-1]<=a[n-2])
//     p++;
//     cout<<p<<endl;
//     // if(p<=k){
//     //     cout<<"YES"<<endl;
//     // }
//     // else{
//     //     cout<<"NO"<<endl;
//     // }
// }
// void ngu9_1(){
//     int n, k;cin>>n>>k;vpi v(n);
// 	rep(i,0,n){
// 		cin>>v[i].first;
// 		v[i].second=i;
// 	}
// 	sort(v.begin() ,v.end());
// 		int ans=1;
// 		rep(i,1,n)
// 			if(v[i - 1].second+1!=v[i].second)
// 			ans++;
// 		cout<<(ans<=k?"YES":"NO")<<endl;
// }
// void ngu1_1(){
//     int k,n,m;cin>>k>>n>>m;vi a(n),b(m);
//     rep(i,0,n) cin>>a[i];
//     rep(i,0,m) cin>>b[i];
//     int pos1=0, pos2=0;
//     vi res;
//     bool ok=true;
//     while(pos1 != n || pos2 != m){
//         if(pos1!=n&&a[pos1]==0){
//         res.push_back(0);
//         k++;
//         pos1++;
//         }else if(pos2!=m&&b[pos2]==0){
//         res.push_back(0);
//         k++;
//         pos2++;
//         }else if(pos1!=n&&a[pos1]<=k){
//         res.push_back(a[pos1++]);
//         }else if(pos2!=m&&b[pos2]<=k){
//         res.push_back(b[pos2++]);
//         }else{
//         cout<<-1<<'\n';
//         ok=false;
//         break;
//         }
//     }
//     if(ok){
//     rep(i,0,res.size())
//         cout<<res[i]<<' ';
//     cout<<endl;
//     }
// }
// void ldi1(){
//     int n;cin>>n;
//     int c=0;
//     rep(i,0,n){
//         int a;cin>>a;
//         if(a==0 && c!=0){
//             cout<<"NO"<<endl;
//             return;}c=(c+a)%2;
//     }
//     if(c==0)cout<<"YES"<<endl;
//     else cout<<"NO"<<endl;
// }
// void ldi2(){
//     ll n,s=0;cin>>n;ll a[n+1],b[n+1];
// 	rep(i,1,n+1){
// 		cin>>a[i]>>b[i];
// 		s+=a[i]-b[i];
// 	}
// 	int ans=abs(s);int c,idx=0;
// 	rep(i,1,n+1){
// 		c=s-2*(a[i]-b[i]);
// 		if(abs(c)>ans){
// 			ans=abs(c);
// 		    idx=i;
// 		}
// 	}
// 	cout<<idx<<'\n';
// }
// void ldi3(){
//     int n,n1,n2;cin>>n>>n1>>n2;
//     if(n1>n2) swap(n1,n2);vd arr(n);
//     rep(i,0,n) cin>>arr[i];
//     sort(arr.rbegin(),arr.rend());
//     double s1=0,s2=0;
//     rep(i,0,n1)s1+=arr[i];
//     rep(i,n1,n1+n2) s2+=arr[i];
//     double ans=s1/double(n1)+s2/double(n2);
//     cout<<setprecision(8)<<ans<<endl;
// }
// void ldi4(){
//     int v[4][4];
//     rep(i,0,4){
//         rep(j,0,4){
//             char a;cin>>a;
//             v[i][j]=(a=='x'?1:(a=='.'?0:-999));
//         }
//     }
//     rep(i,0,2){
//         rep(j,0,4){
//             if(v[i][j]+v[i+1][j]+v[i+2][j]>1||v[j][i]+v[j][i+1]+v[j][i+2]>1){
//                 cout<<"YES"<<endl;
//                 return;
//             }
//         }
//     }
//     rep(i,0,2){
//         rep(j,0,2){
//             if(v[i][j]+v[i+1][j+1]+v[i+2][j+2]>1||v[i][3-j]+v[i+1][2-j]+v[i+2][1-j]>1){
//                 cout<<"YES"<<endl;
//                 return;
//             }
//         }
//     }
//     cout<<"NO"<<endl;
// }
// void ldi5(){
//     int n,m,com=0;;cin>>n>>m;
//     vs a(n),b(m);
//     rep(i,0,n) cin>>a[i];
//     rep(i,0,m) cin>>b[i];
//     if(n>m){
//         cout<<"YES"<<endl;
//         return;
//     }
//     if(m>n){
//         cout<<"NO"<<endl;
//         return;
//     }
//     rep(i,0,n){
//         rep(j,0,m){
//             if(a[i]==b[j]) {com++;break;}
//         }
//     }
//     //cout<<com<<endl;
//     if(com%2)
//     cout<<"YES"<<endl;
//     else
//     cout<<"NO"<<endl;

// }
// void ldi6(){
//     int n;cin>>n;bool c=false;
//     vll a(n);cin>>a[0];rep(i,1,n) {cin>>a[i];if(a[i]<=a[i-1]&&!c)c=true;}
//     if(!(n%2)){
//         cout<<"YES"<<endl;
//         return;
//     }
//     if(c){
//         cout<<"YES"<<endl;
//         return;
//     }
//     cout<<"NO"<<endl;
// }
// // ll a[20005][2005],sum[2005];
// // void ldi7(){
// //     // ll n;cin>>n;
// //     // repll(i,1,n+1) cin>>a[1][i];
// //     // ll cnt=1;
// //     // while(1){
// //     //     repll(i,1,2001) sum[i]=0;
// //     //     bool flag=0;
// //     //     repll(i,1,n+1) sum[a[cnt][i]]++;
// //     //     repll(i,1,n+1){ if(sum[a[cnt][i]]!=a[cnt][i]) flag=1;}
// //     //     if(flag==0){
// //     //         break;
// //     //     }
// //     //     cnt++;
// //     //     repll(i,1,n+1) a[cnt][i]=sum[a[cnt-1][i]];
// //     // }
// //     // ll q,k,x;cin>>q;
// //     // while(q--){
// //     //     cin>>k>>x;
// //     //     if(k+1>cnt) k=cnt-1;
// //     //     cout<<a[k+1][x]<<endl;
// //     // }
// //     int t,n,q;
// // 	// cin>>t;
// // 	// while(t--){
// // 		cin>>n;
// // 		for(int i=1;i<=n;++i){
// // 			cin>>a[1][i];
// // 		}
// // 		int cnt=1;
// // 		while(1){
// // 			for(int i=1;i<=2000;++i){
// // 				sum[i]=0;
// // 			}
// // 			bool flag=0;
// // 			for(int i=1;i<=n;++i){
// // 				sum[a[cnt][i]]++;
// // 			}
// // 			for(int i=1;i<=n;++i){
// // 				if(sum[a[cnt][i]]!=a[cnt][i]) flag=1;
// // 			}
// // 			if(flag==0) break;
// // 			cnt++;
// // 			for(int i=1;i<=n;++i){
// // 				a[cnt][i]=sum[a[cnt-1][i]];
// // 			}
// // 		}
// // 		cin>>q;
// // 		int k,x;
// // 		while(q--){
// // 			cin>>x>>k;
// // 			if(k+1>cnt) k=cnt-1;
// // 		    cout<<a[k+1][x]<<endl;
// //         }
// // }
// // int a[35],p=1000000007;
// // void ldi8(){
// //     ll n,k,t,q,ans;
// //     cin>>n>>k;t=0;q=1;ans=0;
// // 		while(k){
// // 			a[t]=k%2;
// // 			t++;
// // 			k/=2;
// // 		}
// // 		for (int i=0;i<t;++i) {
// // 			ans=(ans+a[i]*q)%p;
// // 			q=(q*n)%p;
// // 		}
// // 		cout<<ans<<endl;
// // }
// // int n, a[45];
// // void ldi9(){
// //     cin >> n;
// // 		int mini = 0x3f3f3f3f;
// // 		for (int i = 1; i <= n; i++) {
// // 			cin >> a[i];
// // 			mini = min(mini, a[i]);
// // 		}
// // 		int ans = 0;
// // 		for (int i = 1; i <= n; i++) ans = gcd(ans, a[i] - mini);
// // 		if (ans == 0) ans = -1;
// // 		cout << ans << "\n";

// // }
// void ldi1_1(){
//     // int n;cin>>n;
//     // vi a(n);
//     // vpi actions;
//     // rep(i,0,n) cin>>a[i];
//     // rep(i,0,n-1){
//     //     int min_pos=i;
//     //     rep(j,i+1,n){
//     //         if(a[j]<a[min_pos]){
//     //             min_pos=j;
//     //         }
//     //         if(min_pos>i){
//     //             actions.push_back(make_pair(i,min_pos));
//     //             int temp=a[min_pos];
//     //             for (int k = min_pos; k > i; k--){
//     //                 a[k] = a[k - 1];
//     //             }
//     //             a[i]=temp;
//     //         }
//     //     }
//     // }
//     // cout<<actions.size()<<endl;
//     // rep(i,0,actions.size()){
//     //     cout<<actions[i].ff+1<<" "<<actions[i].ss+1<<" "<<actions[i].ss-actions[i].ff<<endl;
//     // }
//     int n;
//         cin >> n;
//         vector<int> a(n);
//         vpi actions;
//         for (int i = 0; i < n; i++)
//             cin >> a[i];

//         for (int i = 0; i < n - 1; i++) {
//             int min_pos = i;
//             for (int j = i + 1; j < n; j++)
//                 if (a[j] < a[min_pos])
//                     min_pos = j;

//             if (min_pos > i) {
//                 //actions.push_back({i, min_pos});
//                 int opt = a[min_pos];
//                 for (int j = min_pos; j > i; j--)
//                     a[j] = a[j - 1];
//                 a[i] = opt;
//             }
//         }

//         cout << actions.size() << '\n';
//         // for (auto &lr: actions) {
//         //     cout << lr.first + 1 << ' ' << lr.second + 1 << ' ' << lr.second - lr.first << '\n';
//         // }
// }
// void ic1(){
//     string s;cin>>s;int u=0,r=0;
//     if(s.size()%2){
//         cout<<"-1"<<endl;
//         return;
//     }
//     rep(i,0,s.size()) {if(s[i]=='U') u++; else if(s[i]=='D') u--; else if(s[i]=='L') r--; else r++;}

//     if(u==0&&r==0){
//         cout<<"0"<<endl;
//         return;
//     }
//     if(u==0){
//         cout<<abs(r/2)<<endl;
//         return;
//     }
//     if(r==0){
//         cout<<abs(u/2)<<endl;
//         return;
//     }
//     u=abs(u);
//     r=abs(r);
//     int x=min(u,r);u-=x;r-=x;
//     cout<<x+max(u/2,r/2)<<endl;
// }
// void ic2(){
//     ll l1,l2,r1,r2,k;
//     cin>>l1>>r1>>l2>>r2>>k;ll ans;
//     ll l=max(l1,l2),r=min(r1,r2);
//     if(l>r){
//         cout<<"0"<<endl;
//         return;
//     }else{
//         ans=r-l+1;
//         if(k>=l&&k<=r)
//         ans--;
//         cout<<max(0ll,ans)<<endl;
//     }
// }
// void ic3(){
//     int n;cin>>n;vi a(n);rep(i,0,n) cin>>a[i];
//     if(n==1&&a[0]==0){
//         cout<<"UP"<<endl;
//         return;
//     }
//     if(n==1&&a[0]==15){
//         cout<<"DOWN"<<endl;
//         return;
//     }
//     if(n==1&&a[0]!=0&&a[0]!=15){
//         cout<<"-1"<<endl;
//         return;
//     }
    
//     int x=a[n-1]-a[n-2];
//     if(x>0&&a[n-1]!=15){
//         cout<<"UP"<<endl;
//     }else if(x>0&&a[n-1]==15){
//         cout<<"DOWN"<<endl;
//     }
    
//     if(x<0&&a[n-1]!=0)
//     cout<<"DOWN"<<endl;
//     else if(x<0&&a[n-1]==0)
//     cout<<"UP"<<endl;

// }
// void ic4(){
//     int n,k;cin>>n>>k;
//     vs a(n);rep(i,0,n) cin>>a[i];
//     string crt;cin>>crt;
//     sort(a.begin(),a.end());
//     //rep(i,0,n) cout<<a[i]<<" ";
//     int t=0,s=0;
//     rep(i,0,n){
//         if(crt.size()>a[i].size()){
//             t++;
//         }
//         if(crt.size()==a[i].size()){
//             s++;
//         }
//     }
    
//     cout<<(t+((t)/k)*5)+1<<" ";
//     if(s==1)
//     cout<<(t+((t)/k)*5)+1<<endl;
//     else
//     cout<<(t+s)+((t+s-1)/k)*5<<endl;
// }
// void ic5(){
//     int n;string s;cin>>n>>s;
// 	int l1=0,l2=0,p=0,w=0;
// 	rep(i,0,n){
// 		if(s[i]=='_'){
// 			if(w>0&&p)
// 		    l2++;
// 			w=0;
// 		}
// 		else if(s[i]=='('){
// 			w=0;
// 			p=1;
// 		}
// 		else if(s[i]==')'){
// 			if(w>0) 
//             l2++;
// 			p=0;
// 			w=0;
// 		}
// 		else{
// 			w++;
// 			if(!p) 
//             l1=max(l1, w);
// 		}
// 	}
// 	cout<<l1<<" "<<l2<<endl;
// }
// void ic6(){
//     int n;cin>>n;
//     vll a(n);
//     rep(i,0,n) cin>>a[i];
//     if(n==2){
//         if(a[0]==a[1]){
//             cout<<"0"<<endl;
//         }else{
//             cout<<max(a[0],a[1])<<endl;
//         }
//         return;
//     }
//     vll gcds;
//     rep(i,0,n-2){
//         ll g=gcd(a[i],a[i+2]);
//         if(a[i+1]%g==0)
//         continue;
//         gcds.push_back(g);
//     }
//     //rep(i,0,gcds.size()) cout<<gcds[i]<<" ";
//     rep(i,0,gcds.size()){
//         ll cur=gcds[i];int f=1;
//         rep(j,0,n-1){
//             if(a[j]%cur==0&&a[j+1]%cur!=0){
//                 j++;
//                 continue;
//             }
//             f=0;
//             if(f==0)
//             break;
//         }
//         if(f==1){
//              cout<<cur<<endl;
//             return;
//         }f=1;
//         rep(j,0,n-1){
//             if(a[j]%cur!=0&&a[j+1]%cur==0){
//                 j++;
//                 continue;
//             }
//             f=0;
//             if(f==0)
//             break;
//         }

//         if(f==1){
//             cout<<cur<<endl;
//             return;
//         }
//     }
//     cout<<"0"<<endl;
// }
// void ic6_1(){
//     ll m,d1,d2,c1,c2;
//     cin>>m;vll a(m+1);
//     for(ll i=1;i<=m;i++)
//     cin>>a[i];
//     d1=a[1];
//     d2=a[2];c1=0;c2=0;
//     for(ll i=1;i<=m;i++)
//         if(i%2==0) d2=gcd(a[i],d2);
//         else d1=gcd(a[i],d1);
//     for(ll i=1;i<=m;i=i+2)
//           if(a[i]%d2!=0) c1++;
//     for(ll i=2;i<=m;i=i+2)
//          if(a[i]%d1!=0) c2++;
//     if(c2==m/2) cout<<d1<<'\n';
//     else {if(c1==m-m/2) cout<<d2<<'\n';else cout<<0<<'\n';}
// }
// void ic7(){
//     int n;string s;cin>>n>>s;
// 		int id=1;
// 		while(id<n&&(s[id]<s[id-1]||id!=1&&s[id]==s[id-1]))id++;
// 		string ans=s.substr(0,id);
// 		string t=ans;
// 		reverse(t.begin(),t.end());
// 		ans+=t;
// 		cout<<ans<<endl;
// }
// // const int N=2e5+10;
// // int a[N];
// // int n;
// // bool ic8(int l,int r,int k){
// // 	if (l>r) return 1;
// // 	if (a[l]==a[r]) return ic8(l+1,r-1,k);
// // 	else if (a[l]==k) return ic8(l+1,r,k);
// // 	else if (a[r]==k) return ic8(l,r-1,k);
// // 	else return 0;
// // }
// int chk(string &s,int i){
//     if(s[i]=='a'&&s[i+1]=='b'&&s[i+2]=='c')
//     return 1;
    
//    return 0;
    
// }
// void ic10(){
//     ll n,k;cin>>n>>k;
//     ll ans=0,cur=1;
//     while (cur<k){
//       cur*=2;
//       ++ans;
//     }
//     if(cur<n)
//     ans+=(n-cur+k-1)/k;
//     cout<<ans<<'\n';
// }
// void yep1(){
//     int a,b,c;cin>>a>>b>>c;
// 	while(c>=0){
// 		if(c%a==0){
// 			cout<<"Yes";
// 			return;
// 		}
// 		c-=b;
// 	}
// 	cout<<"No";
// }

// void pulse3(){
//     int n;cin>>n;int a[200005]={0};
//     rep(i,1,n+1) cin>>a[i];
//     int i=0,j=n+1,x=0;ll s1(0),s2(0);
//     while(i<j){
//         if(s1<s2){
//             s1+=a[++i];
//         }
//         else if(s1>s2){
//             s2+=a[--j];
//         }
//         else{
//             x=i;
//             s1+=a[++i];
//             s2+=a[--j];
//         }
//     }
//     cout<<accumulate(a+1,a+x+1,0ll)<<endl;
// }
// void pulse4(){
//     int n,k,x,t[128]={0};cin>>n>>k;
// 	rep(i,0,k){
// 		cin>>x;
// 		t[x]++;
// 	}
// 	int dx=1,tf;
// 	while(1){
// 		tf=n;
// 		for(int i=1; i<=100&&tf>0; i++){
// 			tf-=t[i]/dx;
// 		}
// 		if(tf>0) break;
// 		dx++;
// 	}
// 	cout<<dx-1;
// }
// void pulse5(){
//     const int N=2e5+5;
//     int a[N],b[N];
//     int n,k,mark=-1;cin>>n>>k;
// 	for(int i=0;i<n;i++){
//         int c;cin>>c;
// 		if(a[c]){
// 			mark=0;
// 		}
// 		else if(a[c&k]||b[c]){
// 			if(mark!=0)
//             mark=1;
// 		}
// 		else if(b[c&k]){
// 			if(mark==-1)
//             mark=2;
// 		}
// 		a[c]=1;
// 		b[c&k]=1;
// 	}
// 	cout<<mark<<endl;
// }
// // void pulse6(){
// //     int n;string s, t;cin>>n>>s>>t;vi ans;
// // 	rep(i,0,n){
// // 		if(s[i]==t[i]) 
// //         continue;
// // 		int pos=-1;
// // 		rep(j,i+1,n){
// // 			if (s[j]==t[i]){
// // 			pos=j;
// // 	        break;
// // 		    }		
// //         }
// // 		if(pos==-1){
// // 			cout<<-1<<endl;
// // 			return;
// // 		}
// // 		repr(j,pos-1,i){
// // 			swap(s[j],s[j+1]);
// // 			ans.push_back(j);
// // 		}
// // 	}
// // 	assert(s==t);
// // 	cout << ans.size() << endl;
// // 	for (auto it : ans) cout << it + 1 << " ";
// // 	cout << endl;
// // }
// void pulse7(){
//     ll ar[4]={0};
//     char c1[4] = {'0', '0', '1', '1'};
//     char c2[4] = {'0', '1', '0', '1'};
//     int n;cin>>n;string a,b;cin>>a>>b;
//     rep(i,0,n){
//         rep(j,0,4){
//             if(c1[j]==a[i]&&c2[j]==b[i]){
//                 ar[j]++;
//             }
//         }
//     }
//     cout<<ar[0]*ar[2]+ar[0]*ar[3]+ar[1]*ar[2]<<endl;
// }
// void pulse8(){
//     ll n,m,i=0,k,l;string s,t;cin>>n>>m>>s>>t;
// 	while(s[i]==t[i]&&i<min(n,m)) i++;
// 	while(s[n-1]==t[m-1]&&i<min(n,m)) n--,m--;
// 	cout<<(s[i]=='*'&&n-i==1||s==t?"YES":"NO");
// }
// void tiny1(){
//     int n;
// 	scanf("%d", &n);
// 	vector<int> a(n);
// 	for (int i = 0; i < n; ++i)
// 		scanf("%d", &a[i]);
// 	int ans = 0;
// 	for (int i = 0; i < n; ++i) {
// 		int j = i;
// 		while (j + 1 < n && a[j + 1] <= a[j] * 2)
// 			++j;
// 		ans = max(ans, j - i + 1);
// 		i = j;
// 	}
	
// 	printf("%d\n", ans);
// }
// void tiny2(){
//     string s;
//     cin>>s;
//     int n=s.size();
//     int a=n/20;
//     if(n%20)    a++;
//     int b=(n+a-1)/a;
//     int m=a*b-n;
//     cout<<a<<" "<<b<<endl;
//     int p=0;
//     for(int i=0; i<a; i++)
//     {
//         for(int j=0; j<b; j++)
//         {
//             if(i<m&&j==0)   cout<<"*";
//             else    cout<<s[p++];
//         }
//         cout<<endl;
//     }
// }
// void tin1(){
//     int x;
//     cin>>x;
// 	cout<<(1<<__builtin_popcount (x))<<endl;
// }
// void tin2(){
//     string s;cin>>s;int l=s.size();int a1=0,a2=0,a3=0,b1,b2,b3;
//     rep(i,0,l){
// 	    if (s[i]>='0' && s[i]<='9') a1++,b1=i;
// 	    else 
//         if (s[i]>='a' && s[i]<='z') a2++,b2=i;
// 	    else
// 	    a3++,b3=i;
//     }
//     if (!a1 && !a2) s[0]='1',s[1]='a';
//     else
//     if (!a1 && !a3) s[0]='1',s[1]='A';
//     else
//     if (!a2 && !a3) s[0]='a',s[1]='A';
//     else
//     if (!a1){
// 	if (a2>1) s[b2]='1';
// 	else
// 	s[b3]='1';
//     }
//     else
//     if (!a2){
// 	if (a1>1) s[b1]='a';
// 	else
// 	s[b3]='a';
//     }
//     else
//     if (!a3){
// 	if (a2>1) s[b2]='A';
// 	else
// 	s[b1]='A';
//     }
//     cout<<s<<endl;
// }
// void kicksi1(){
//     int n;string s;cin>>n>>s;
// 	int pos=n-1;
// 	rep(i,0,n-1){
// 		if(s[i]>s[i+1]){
// 		pos=i;
// 		break;
//     	}
// 	}
// 	cout<<s.substr(0,pos)+s.substr(pos+1)<<endl;
// }
// void kicksi2(){
//     ll n,m;cin>>n>>m;
// 	vll c(n+m),t(n+m);
// 	repll(i,0,n+m)cin>>c[i];
// 	vll pass,taxi;    
// 	repll(i,0,n+m){
// 	    cin>>t[i];
// 	    if(t[i]==1)taxi.push_back(c[i]);
// 	    else pass.push_back(c[i]);
// 	}
//     ll j=0;vi ans(m,0);
//     repll(i,0,n){
//         while(j<m-1 && abs(pass[i]-taxi[j]) > abs(pass[i]-taxi[j+1])) j++;
//         ans[j]++;    
//     }
//     repll(i,0,m)cout<<ans[i]<<" ";
// }
// void kicksi3(){
//     long long i=0,c=0,b;
// cin>>b;
// for (i=1;i*i<=b;i++){
// if (b%i==0){c+=2;}
// if (i*i==b){c--;}}
// cout<<c;
// }
// void kicksi4(){
// 	int n;cin>>n;int a[n];
// 	rep(i,0,n) cin>>a[i];
// 	sort(a,a+n);
// 	for(int i=0;i<n;i+=2) cout<<a[i]<<' ';
// 	for(int i=n-1-n%2;i>=0;i-=2) cout<<a[i]<<' ';
// }
// void kicksi5(){
//     int n;string s;cin>>s>>n;int ctL=0,ctq=0,cts=0;
//     rep(i,0,s.size()){
//         if(s[i]=='*') cts++;
//         else if(s[i]=='?') ctq++;
//         else ctL++;
//     }
//     if((ctL<n&&!cts)||(ctL>n&&(ctL-n)>(ctq+cts))){
//         cout<<"Impossible"<<endl;
//         return;
//     }
//     if(ctL==n){
//         rep(i,0,s.size()){
//             if(s[i]=='*') continue;
//             else if(s[i]=='?') continue;
//             cout<<s[i];
//         }
//         cout<<endl;
//     }
//     if(ctL>n){
//         int diff=ctL-n;
//         string ans="";
//         rep(i,0,s.size()-1){
//             if(s[i+1]=='*'&&diff!=0){
//                 diff--;
//                 i++;
//                 if(diff==0){
//                     ans=ans+s.substr(i+1);
//                     break;
//                 }
//                 continue;
//             }
//             if(s[i+1]=='?'&&diff!=0){
//                 diff--;
//                 i++;
//                 if(diff==0){
//                     ans=ans+s.substr(i+1);
//                     break;
//                 }
//                 continue;
//             }
//             if(diff==0){
//                 ans=ans+s.substr(i);
//                 break;
//             }
//             ans=ans+s[i];
//         }
//         //cout<<ans;
//         rep(i,0,ans.size()){
//             if(ans[i]!='*'&&ans[i]!='?'){
//                 cout<<ans[i];
//             }
//         }
//         cout<<endl;
//         return;
//     }
//     if(ctL<n){
//         int diff=n-ctL;string ans="";int pos=-1;char c;
//         rep(i,0,s.size()){
//             if(s[i]=='*'){
//                 c=s[i-1];
//                 pos=i;
//                 break;
//             }
//         }
//         rep(i,0,pos){
//             if(s[i]!='*'&&s[i]!='?')
//             cout<<s[i];
//         }
//         rep(i,0,diff){
//             cout<<c;
//         }
//         rep(i,pos,s.size()){
//             if(s[i]!='*'&&s[i]!='?'){
//                 cout<<s[i];
//             }
//         }
//     }
// }
// void tickli1(){
//     ll n,k,s=0,c=0;
//     cin>>n>>k;
//     ll a[n+5];
//     for(int i=1;i<=n;i++)cin>>a[i],s+=a[i];
//     if(s<k) {cout<<-1,0;return;}
//     sort(a+1,a+n+1);
//     s=s-k;
//     s=s/n;
//     s=min(s,a[1]);
//     cout<<s;
// }
// void tickli2(){
//     int n,x,y,d;cin>>n>>x>>y>>d;
// 	int res=INT_MAX;
// 	if(abs(x-y)%d==0) res=abs(x-y)/d;
// 	else{
// 		if((y-1)%d==0) res=min(res,(y-1)/d+1+(x-1)/d);	
// 		if((n-y)%d==0) res=min(res,(n-y)/d+1+(n-x)/d);
// 	}
// 	if(res==INT_MAX)
// 	res=-1;
// 	cout<<res<<endl;
// }
// void tickli3(){
//     ll x;cin>>x;ll i;
//     for(i=2; x%i!=0&&i*i<x;)
//         i++;
//     if(i*i>x)
//     cout<<"1"<<endl;
//     else 
//     cout<<(x-i)/2+1<<endl;
// }
// void zick1(){
//     int n, k, s, t;cin>>n>>k;int a[200005];
// 	rep(i,0,n) cin>>a[i];
// 	sort(a,a+n);
// 	s=0;t=1;
// 	rep(i,1,n){
// 		if(a[i]>a[i-1]){
// 			if(a[i]<=a[i-1]+k){
// 				s+=t;
// 			}
// 			t=1;
// 		}
// 		else t++;
// 	}
// 	cout<<n-s<<endl;
// }
// void zick2(){
//     int n,k;char a[400001];cin>>n>>k>>a;
// 	int x=0,t=0;
// 	char y='a';
// 	while(k){ 
// 	   rep(i,0,n) 
// 	      if(a[i]==y){
// 		  	a[i]='0';
// 		  	k--;
// 		  	if(k==0) break;
// 		  } 
		  
// 		y++;
// 	}
// 	rep(i,0,n)
// 	   if(a[i]!='0') cout<<a[i];
	
// }
// void zick3(){
//     int a ,b;cin>>a>>b;
// 	vi v,x(a);
// 	rep(i,0,a) cin>>x[i];
// 	int even=0,odd=0;
// 	rep(i,0,a){
// 		if(i!=0&&even==odd)
// 	    v.push_back(abs(x[i]-x[i-1]));
// 	    if (x[i]%2==0) even++;
// 	    else odd++;
//     }
//     int ans=0;
//     sort(v.begin(),v.end());
//     rep(i,0,v.size()){
// 	if(v[i]<=b){
// 	ans++;
// 	b=b-v[i]; 
//     }
// 	else break;
//     }
//     cout<<ans;
// }
// // int n,a[20];
// // bool rec(int s,int i){
// // 	if(i==n){
// // 		if(s%360==0)
// // 			return 1;
// // 		else
// // 			return 0;
// // 	}
// // 	return rec(s+a[i],i+1)||rec(s-a[i],i+1);
// // }
// // void twig1(){
// //     cin>>n;
// // 	rep(i,0,n) cin>>a[i];
// // 	if(rec(0,0))
// // 		cout<<"YES";
// // 	else
// // 		cout<<"NO";
// // }
// void twig2(){
//     int m[105]={0};
//     int n,k;cin>>n>>k;
// 	rep(i,0,n){
// 	    int tmp;cin>>tmp;
// 		tmp%=k;
// 		m[tmp]++;
// 	}
// 	int r=0;
// 	for(int i=1;i<=(k-1)/2;i++){
// 		r+=min(m[i],m[k-i])*2;
// 	}
// 	r+=m[0]/2*2;
// 	if(k%2==0){
// 		r+=m[k/2]/2*2;
// 	}
// 	cout<<r<<endl;
// }
// void twig3(){
//     int n, max=1;cin>>n;
// 	vi s(n);
// 	rep(i,0,n) cin>>s[i];
// 	sort(s.begin(), s.end());
// 	int j=0;
// 	rep(i,0,n)
// 		while(j<n && abs(s[i]-s[j])<=5){
// 			if(abs(j-i+1)>max)
// 			max=j-i+1;
// 			j++;
// 		}
// 	cout<<max<<endl;
// }
// void geek4(){
//     int n;cin>>n;int a[n];rep(i,0,n) cin>>a[i];
//     int i=1,l=1,r=n;
//     while(i<n&&a[i]>a[i-1]){
//         i++;l=i;
//     }
//     while(i<n&&a[i]<a[i-1]){
//         i++;r=i;
//     }
//     reverse(a+l-1,a+r);
//     if(is_sorted(a,a+n)){
//         cout<<"yes"<<endl;
//         cout<<l<<" "<<r<<endl;
//     }
//     else cout<<"no"<<endl;
// }
// void jiks1(){
//     int k;cin>>k;
//     if(k>36) {cout<<"-1"<<endl;return;}
//     while(k>0) {
//         if(k==1) {cout<<9; k--;}
//         else cout<<8;
//         k-=2;
//      }
// }
// void hine1(){
//     ll n,m;cin>>n;
//     if(n%2!=0){
//   	    cout<<"YES"<<"\n";
//   	    rep(i,0,n){
//   		    if(i%2==0)
// 		    cout<<2*i+1<<' ';
// 		    else
// 		    cout<<2*i+2<<' ';	
// 	    }
// 	    rep(i,0,n){
// 		    if(i%2==0)
// 		    cout<<2*i+2<<' ';
// 		    else
// 		    cout<<2*i+1<<' ';
// 	    }
//         return;
//     }
//     cout<<"NO";
// }
// void hine2(){
//     int n;cin>>n;vi a(n+1);
//     int r,ans=1e9;
//     rep(i,1,n+1){
//         int k;cin>>k;
//     	if(a[k]) ans=min(ans,i-a[k]+1);
//     	a[k]=i;
//     }
//     cout<<(ans<1e9?ans:-1)<<'\n';
// }
// void hine3(){
//     int i,n,m,a[100005],b[100005];
// 	cin>>n;
// 	for(i=0;i<=100005;i++)
// 		b[i]=0;
// 	for(i=0;i<n;i++) 
// 	{
// 		cin>>a[i];
// 		b[a[i]]++;
// 	}
// 	for(i=0;i<n;i++)
// 	{
// 		if(b[a[i]]%2!=0)
// 	       	{
// 			cout<<"Conan\n";
// 			return;
// 		}
// 	}
// 	cout<<"Agasa\n";
// }
// void ldt1(){
//     int n;cin>>n;vi a(n),vis(n+1,0),ans(n,-1);int f=0;
//     rep(i,0,n) {cin>>a[i];if(i+1>a[i])f=1;}
//     if(f){cout<<"-1"<<endl;return;}
//     rep(i,0,n-1){
//         if(a[i]==a[i+1]&&!vis[a[i]]){
//             vis[a[i]]=1;
//             ans[i]=a[i];
//             i++;
//         }
//     }
//     // rep(i,0,n) cout<<ans[i]<<" ";
//     // cout<<endl;
//     rep(i,0,n){
//         if(!vis[a[i]]){
//             ans[i]=a[i];
//             vis[a[i]]=1;
//         }
//     }
//     // rep(i,0,n) cout<<ans[i]<<" ";
//     // cout<<endl;
//     vi st(n,-1);int k=0;
//     rep(i,0,n) {if(!vis[i+1]){st[k]=i+1;k++;}}
//     // rep(i,0,n){if(st[i]!=-1)cout<<st[i]<<" ";}
//     k=0;
//     rep(i,0,n){
//         if(ans[i]==-1){
//             ans[i]=st[k];
//             k++;
//         }
//     }

//     rep(i,0,n) cout<<ans[i]<<" ";
//     cout<<endl;
// }
// void ldt2(){
//     int n,k;cin>>n>>k;
//     int a[n],odd=0;
//     rep(i,0,n){
//       cin>>a[i];odd+=a[i]%2;
//     }
//     if(odd<k||odd%2!=k%2){
//       cout<<"NO"<<endl;
//       return;
//     }
//     cout<<"YES"<<endl;
//     k--;
//     for(int i=0;k;i++){
//       if(a[i]%2){
//         cout<<i+1<<" ";
//         k--;
//       }
//     }
//     cout<<n<<endl;
// }
// void net1(){
//     ll n,m;cin>>n>>m;ll k=1;vll a;
//     if(m>n){
//         cout<<"0"<<endl;return;
//     }
//     if(m==n){
//         cout<<m%10<<endl;return;
//     }ll prev=-1;ll temp=m,st=m;;
//     while(1){
//         ll t=m%10;
//         prev=t;
//         k++;
//         m=temp*k;
//         // cout<<m<<" ";
//         a.push_back(t);
//         if(prev==0) break;
//     }m=st;
//     ll s(0);rep(i,0,a.size()) s+=a[i];
//     ll tt=(n/m)/a.size();
//     ll ans=tt*s;
//     // ll quo=tt%(a.size());
//     // for(int i=0;quo;i++){
//     //     ans+=a[i];
//     //     if(i>=a.size()) i=0;
//     //     quo--;
//     // }
//     ll quo=(n/m)%(a.size());ll i=0;
//     while(quo--){
//         ans+=a[i];
//         i++;
//     }
//     cout<<ans<<endl;
// }
// void net2(){
//     int n,m=0,b;cin>>n;
// 	rep(i,0,n){
// 		int a;cin>>a;
// 		if(i!=0&&!m){
// 			if(a-b>=2|| b-a>=2){
// 				cout<<"YES"<<endl<<i<<" "<<i+1<<endl;
// 				m=1;
// 			}
// 		}
// 		b=a;
// 	}
// 	if(!m){cout<<"NO"<<endl;}
// }
// void kkkk1(){
//     int n;cin>>n;
// 	int b=0;
// 	ll ans=0;
// 	while (n--) {
// 		int a;cin>>a;
// 		if(b>a)
// 		ans+=b-a;
// 		b=a;
// 	}
// 	cout<<ans<<'\n';
// }
// void kkkk2(){
//     ll n;cin>>n;vll a(n);
//     repll(i,0,n) cin>>a[i];
//     sort(a.begin(),a.end());
//     ll ans = INT64_MIN;
//     ans=max(ans*1ll,(a[n-5]*a[n-4]*a[n-3]*a[n-2]*a[n-1])*1ll);
//     ans=max(ans*1ll,(a[0]*a[n-4]*a[n-3]*a[n-2]*a[n-1])*1ll);
//     ans=max(ans*1ll,(a[0]*a[1]*a[n-3]*a[n-2]*a[n-1])*1ll);
//     ans=max(ans*1ll,(a[0]*a[1]*a[2]*a[n-2]*a[n-1])*1ll);
//     ans=max(ans*1ll,(a[0]*a[1]*a[2]*a[3]*a[n-1])*1ll);
//     ans=max(ans*1ll,(a[0]*a[1]*a[2]*a[3]*a[4])*1ll);
//     cout<<ans<<endl;
// }
// void kkkk3(){
//     string s;
//     getline(cin,s);
//     ll x;cin>>x;
// }
// void tete1(){
//     int n;cin>>n;vpi a(n);rep(i,0,n) {cin>>a[i].first;a[i].second=i+1;}
//     sort(a.begin(),a.end());
//     if(a[0].first==a[1].first){
//         cout<<"Still Rozdil"<<endl;return;
//     }
//     cout<<a[0].second<<endl;
// }
// int main(){
//     Optimize
//     // int u;cin>>u;
//     // while(u--){
//         tete1();
//     // }
// }
