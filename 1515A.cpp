#include<bits/stdc++.h>
#include<iterator>
#include <math.h>
#include<numeric>
#define ll long long
#define mod 1000000007
using namespace std;
int main()
{
int t;
cin>>t;
while (t--)
{ 
    int n,x;
    cin>>n>>x;
    int a[n],sum=0;
    for(int i=0;i<n;i++)
    {  
      cin>>a[i];
      sum=sum+a[i];
    }
   
    if(sum==x)
    cout<<"NO\n";
    else
    { 
     vector<int>v;
     int parbo=0;
     for(int i=0;i<n;i++)
     {  
         parbo=parbo+a[i];
         if(parbo==x)
         {
            swap(a[i],a[i+1]);
            v.push_back(a[i]);
         }
         else
         v.push_back(a[i]);
     }
     cout<<"YES\n";
     for(int i=0;i<v.size();i++)
     cout<<v[i]<<" ";
     cout<<endl;
  
    }
    
    
   
}


return 0;
}
