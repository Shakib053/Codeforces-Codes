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
    int a,b,mx,mn;
    cin>>a>>b;
    if(a>b) mx=a, mn=b;
    else mx=b,mn=a;
    if(mn*2>=mx)
    cout<<pow(mn*2,2);
    else
    cout<<pow(mx,2);

    cout<<endl;
}

 
return 0;
}

