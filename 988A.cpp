#include<bits/stdc++.h>
#include<iterator>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
int n,k;
cin>>n>>k;
set<int>s;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
vector<int>v;
for(int i=0;i<n;i++)
{   
    int x=a[i];
    if(s.count(x)==0)
    {
    s.insert(x);
    v.push_back(i+1);
    }
    
}
if(s.size()<k)
cout<<"NO\n";
else
{
    cout<<"YES\n";
    for(int i=0;i<k;i++)
    cout<<v[i]<<" ";
    cout<<endl;
}
return 0;
}
