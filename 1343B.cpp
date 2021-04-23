#include<bits/stdc++.h>
#include<iterator>
#include<set>
#define ll long long
using namespace std;
int main()
{   
ll int t;
cin>>t;
while (t--)
{
    int n;
    cin>>n;
    if((n/2)%2!=0)
    cout<<"NO\n";
    else{
    int a[n],sum=0;
    vector<int> v;
    for(int i=0,j=2;i<n/2;i++,j=j+2)
    {
      v.push_back(j);
      sum=sum+j;

    }
    for(int i=n/2,j=1;i<n-1;i++,j=j+2)
    {
     v.push_back(j);
     sum=sum-j;
    }
    v.push_back(sum);
    cout<<"YES\n";
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    cout<<endl;
    }
}


return 0;
}

