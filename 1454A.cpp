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
    for(int i=(n/2)+1;i<=n;i++)
    {
        cout<<i<<" ";
    }
    for(int i=1;i<=(n/2);i++)
    cout<<i<<" ";
    cout<<endl;
    
   
}


return 0;
}
