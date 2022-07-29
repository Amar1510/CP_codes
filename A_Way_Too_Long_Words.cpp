// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    int t;
    cin>>t;
    while(t--){
        std::string s;
        cin>>s;
        int temp = s.size();
        if(temp>10){
        cout<<s[0]+to_string(temp-2)+s[temp-1]<<"\n";
        }
        else{
            cout<<s<<"\n";
        }
    }

    return 0;
}