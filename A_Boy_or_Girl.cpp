#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    set<char> set_obj(begin(s),end(s));
    if(set_obj.size()%2 ==0){
        cout<<"CHAT WITH HER!\n";
    }
    else{
        cout<<"IGNORE HIM!\n";
    }
  
  return 0;
}