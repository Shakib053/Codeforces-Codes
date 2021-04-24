#include<bits/stdc++.h>
#include<iterator>
#include<string>
#define ll long long
using namespace std;
int main()
{
int t;
cin>>t;

while (t--)
{
int n;
cin>>n;
unsigned ll int a[n];
int x=n/2;
vector<int>v1,v2;
for(int i=1;i<=n;i++)
a[i]=pow(2,i);
//for(int i=1;i<=n;i++)
//cout<<a[i]<<" "<<endl;
 int sum1=0,sum2=0;      
for(int i=1;i<x;i++)
 v1.push_back(a[i]);
//for(int i=n;i>n-((n/2)/2);i--) 
v1.push_back(a[n]);
for(int i=x;i<n;i++)
 v2.push_back(a[i]);
 for(int i=0;i<n/2;i++)
 {
     sum1=sum1+v1[i];
     sum2=sum2+v2[i];
 }
 cout<<abs(sum2-sum1)<<endl;
}



 
return 0;
}

