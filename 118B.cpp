#include<bits/stdc++.h>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
int n;
cin>>n;
n++;
for(int i=1;i<=n;i++)
{
    for(int j=i;j<2*n-i;j++)
    {   
         cout<<" ";
    }
   
    
    for(int k=0;k<i;k++)
    {
     cout<<k;
     if(k!=i-1)
     cout<<" ";
    }
    
    
    for(int l=0,show=i-2;l<i-1,show>=0;l++,show--)
    {
    cout<<" "<<show;
    }
    
    
    cout<<endl;
}
n--;
for(int i=1;i<=n;i++)
{
    for(int j=0;j<2*i;j++)
    cout<<" ";
    
    for(int k=0;k<=n-i;k++)
    {
    cout<<k;
    if(k!=n-i)
    cout<<" ";
    }
   
    
    for(int l=0,show=n-i-1;l<i-1,show>=0;l++,show--)
    cout<<" "<<show;
    
    cout<<endl;
}

return 0;
}
