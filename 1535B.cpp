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
vector<int>oi,ei;
    vector<int>v;
int odd=0,mx=(n*(n-1))/2;
for(int i=0;i<n;i++)
{
    if(a[i]%2!=0)
    {
     odd++;
     oi.push_back(i);
    }
    else
    {
        ei.push_back(i);
    }
   
}
if(odd<=1)
cout<<mx<<endl;
else
{  

    int even=n-odd;
    for(int i=0;i<ei.size();i++)
    {
        v.push_back(a[ei[i]]);
    }
    for(int i=0;i<oi.size();i++)
    {
    v.push_back(a[oi[i]]);
    }
    int ans=0;
    for(int i=0;i<v.size();i++)
    {
        for(int j=i+1;j<v.size();j++)
        {
            if(__gcd(v[i],2*v[j])>1)
            ans++;
        }
    }
    cout<<ans<<endl;
}


}


return 0;
}
