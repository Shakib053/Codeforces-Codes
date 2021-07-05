#include<bits/stdc++.h>
#include<iterator>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
int t;
cin>>t;
while (t--)
{ 
int n,h;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
set<double>s;
for(int i=0;i<n;i++)
{   
    if(i>0)
    {
    h=a[i]-a[i-1];
    double ans=0.5*1*h;
    s.insert(ans);
    }
}
for(int i=0;i<n;i++)
{  
    for(int j=i+1;j<n;j++)
    {
    h=abs(a[i]-a[j]);
    double ans=0.5*1*h;
    s.insert(ans);
    } 
    
}
cout<<s.size()<<endl;

}
return 0;
}
