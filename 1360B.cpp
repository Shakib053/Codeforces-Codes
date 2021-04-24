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
    for(int i=0;i<n;i++)
    cin>>a[i];
    int mn=50001;
    sort(a,a+n);
    for(int i=n-1;i>0;i--)
    {
       mn=min((a[i]-a[i-1]),mn);
      
    }
    cout<<mn<<endl;
}

 
return 0;
}

