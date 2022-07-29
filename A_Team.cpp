#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,c=0;
  cin>>n;
  while (n--)
  {
    int arr[3];
    int sum =0;
    for(int i=0;i<3;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    if(sum>=2){
        c+=1;
    }
  }
  cout<<c;
  
  return 0;
}