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
    string s;
    cin>>n>>s;
    int o=0,z=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')
        z++;
        else
        break;
    }
    for(int i=n-1;i>=0;i--)
    {
        if(s[i]=='1')
        o++;
        else
        break;
    }
    if(o+z==n)
    cout<<s<<endl;
    else
    {
        string ss="";
        for(int i=0;i<z;i++)
        ss=ss+(char)('0');
        ss=ss+(char)('0');
        for(int i=0;i<o;i++)
        ss=ss+(char)('1');
        cout<<ss<<endl;
    }
   
}


return 0;
}
