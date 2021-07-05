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
    int a[n];
    int odd=0,even=0;
    for(int i=0;i<n;i++)
    {
     cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        even++;
        else
        odd++;
    }
    if(even==n)
    cout<<"NO\n";
    else if(odd>=1 && even>=1)
    cout<<"YES\n";
    else if(n%2==0 && odd==n)
    cout<<"NO\n";
    else
    cout<<"YES\n";
   
}


return 0;
}
