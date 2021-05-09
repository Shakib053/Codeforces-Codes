#include<bits/stdc++.h>
#include<iterator>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
set<int> s;
vector<int>v;
for(int i=n-1;i>=0;i--)
{
    if(s.count(a[i])==0)
    {
        s.insert(a[i]);
        v.push_back(a[i]);
    }
}
cout<<v.size()<<endl;
for(int i=v.size()-1;i>=0;i--)
cout<<v[i]<<" ";
cout<<endl;
return 0;
}
