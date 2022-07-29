#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
void solve_amar(){ 
       ll n;
    cin >> n;
 
    unordered_set<ll> s;
    
    ll temp=1;
    while(pow(temp,2)<=n)
    {
        s.insert(pow(temp,2));
        temp++;
    }
    temp=1;
    while(pow(temp,3)<=n)
    {
        s.insert(pow(temp,3));
        temp++;
    }
 
    cout<<s.size()<<endl;

  
 }
 
int main()
{
 ll amar; 
 cin>>amar;
 while(amar--){
   solve_amar(); 
 }
  return 0;
}