#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int solve_amar(){ 
    int x,y,c=0;
    cin>>x>>y;
    if(x<y){
        while(x<y){
            x+=1;
            c+=1;
        }
        cout<<c<<"\n";
    }
    else if(x==y){cout<<0<<"\n";}
    else{
        if((x-y)%2==0){
            while(x!=y){
                y+=2;
                c+=1;
            }
            cout<<c<<"\n";
        }
        else{
            while(x-y !=1){
                y+=2;
                c+=1;
            }
            cout<<c+1<<"\n";
        }
        
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