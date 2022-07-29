#include<bits/stdc++.h>
using namespace std;

int main()
{
 long long int n;
 int count=0;
   cin>>n;
//    string s;
//    s= to_string(n);
//    for(int i=0;i<s.size();i++){
//        if(s[i]=='4' || s[i]=='7'){
//            count+=1;
//        }
        
//    } 
 while (n>0){
     if(n%10==4 || n%10==7){
         count++;
     }
     n=n/10;
 }
   if(count==4 || count==7){
       cout<<"YES";
   }
   else{
       cout<<"NO";
   }
  return 0;
}