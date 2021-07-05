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
    map<int,int> m,ps;
    int a[n];
    int mx=INT_MAX;
    int ans=-1;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        ps[x]=i+1;
        m[x]++;
    }
    for(auto it : m)
    {
        if(it.second==1 && mx>it.first)
         {
             mx=it.first;
             ans=ps[it.first];
         }
    }
    cout<<ans<<endl;
 
   
}

 
return 0;
}
