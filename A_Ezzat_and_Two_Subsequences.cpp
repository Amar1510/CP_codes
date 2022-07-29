#include<bits/stdc++.h>
using namespace std;
int main()
{
    int amar;
    cin>>amar;
    while(amar--){
    long long int n,sum=0;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++){cin>>a[i];sum+=a[i];}
    double mx=*max_element(a,a+n);
    sum-=mx;
    double ag=((double)sum/(n-1));
    std::cout << std::setprecision(11);
    cout<<ag+mx<<"\n";}
    return 0;
}