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
    int n,d;
    cin>>n>>d;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        if(a[i]>d)
        v.push_back(a[i]);
        
    }
    
    if(v.empty()==1)
    cout<<"YES\n";
    else if(a[0]+a[1]>d)
    cout<<"NO\n";
    else
    cout<<"YES\n";
    
   
}


return 0;
}
