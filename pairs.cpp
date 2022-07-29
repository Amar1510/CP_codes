#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair<int,char> p1;
    pair<string,double>p2;
    pair<string,double>p3;

    p1.first =100;
    p1.second = 'A';

    p2.first= "Amar";
    p2.second = 1.20;

    p3 = make_pair("Vaishnavi",2.031);

    cout<<p1.first<<" "<<p1.second<<"\n";
    cout<<p2.first<<" "<<p2.second<<"\n";
    cout<<p3.first<<" "<<p3.second<<"\n";

    p3.swap(p2);
    cout<<p2.first<<" "<<p2.second<<"\n";
    cout<<p3.first<<" "<<p3.second<<"\n";

    return 0;
}
