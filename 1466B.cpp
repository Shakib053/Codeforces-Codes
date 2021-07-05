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
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
set<int>s;
for(int i=0;i<n;i++)
{ 
    if(s.count(a[i])==1)
    {
        a[i]=a[i]+1;
        s.insert(a[i]);
    }
    else
    s.insert(a[i]);
}
cout<<s.size()<<endl;
}


return 0;
}
