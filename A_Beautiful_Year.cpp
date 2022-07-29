#include<bits/stdc++.h>
using namespace std;

int main(){
    int y;
    cin>>y;
    //s = to_string(y);
    for(int i=y+1;i<=9000;i++){
        string temp = to_string(i);
        sort(temp.begin(),temp.end());
        for(int j=0;j<temp.length()-1;j++){
            if(temp[i]==temp[i+1]){
                continue;
            }
        }
        cout<<stoi(temp);

    }
    return 0;
}