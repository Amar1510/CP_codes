#include<bits/stdc++.h>
using namespace std;

// int main()
// {
//     map<pair<string,string>,vector<int>> m;
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         string f,l;
//         int ct;
//         cin>>f>>l>>ct;
//         for(int j=0;j<ct;j++){
//             int x;
//             cin>>x;
//             m[{f,l}].push_back(x); 
//         }
//     }
//     for(auto &pr : m){
//         cout<<pr.first.first<<" "<<pr.first.second<<"\n";
//         cout<<pr.second.size()<<"\n";
//         for(auto &ele : pr.second){
//             cout<<ele<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

int main()
{
    map <int,set<string>> m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int marks;
        string name;
        cin>>name>>marks;
        m[marks].insert(name);    
    }
    auto it = --m.end();
    while (true)
    {
        auto &stud = (*it).second;
        int marks = (*it).first;
        for(auto s : stud){
            cout<<s<<" "<<marks<<endl;
        }
        if(it == m.begin())break;
        it--;
    }
    
    return 0;
}
