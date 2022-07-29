#include<bits/stdc++.h>
using namespace std;

int main()
{
    int amar;
   cin>>amar;
   while(amar--)
   {
       int n;cin>>n;int a[n];
       for(int i=0;i<n;i++)cin>>a[i];
       int mi=0,ma=0,ans1=a[0],ans2=a[0];
       for(int i=0;i<n;i++)
       {
           if(a[i]>ans1)
           {ans1=a[i];ma=i;}
           if(a[i]<ans2)
           {
               ans2=a[i];mi=i;
           }
       }
       int t1=0,t2=0,t3=0,t4=0,k1=0,k2=0,k3=0,k4=0;
       t1=mi;t2=ma;t3=n-mi;t4=n-ma;
       k1=(t1+t4+1);k2=(t2+t3+1);k3=(max(t1,t2)+1);k4=(max(t3,t4));
       cout<<min(k1,min(k2,min(k3,k4)))<<endl;
       
       
   }
   
  
  return 0;
}