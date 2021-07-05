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
    unsigned ll int n;
    cin>>n;
    unsigned ll int m=n/9;
    if((n+m)%10==0)
    cout<<n+m-1<<endl;
    else
    cout<<n+m<<endl;
    
   
}


return 0;
}
