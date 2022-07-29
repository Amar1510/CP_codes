#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int solve_amar(){ 
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int p = max(a,b);
    int q = max(c,d);
    if(p<q){
        cout<<"P\n";
    }
    else if(p>q){
        cout<<"Q\n";
    }
    else{
        cout<<"TIE\n";
    }
  
  return 0;
 }
 
int main()
{
 int amar=1; 
 cin>>amar;
 while(amar--){
   solve_amar(); 
 }
  return 0;
}