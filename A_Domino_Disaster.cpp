#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int solve_amar(){ 
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i] == 'D'){
            s[i] = 'U';
        }else if(s[i]== 'U'){
            s[i]='D';
        }
    }
    cout<<s<<"\n";
  
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