#include<bits/stdc++.h>
#include<iterator>
#include<set>
#define pi 3.1415
#define ll long long
using namespace std;
int main()
{   
    string s;
    cin>>s;
    int n=s.size(),c=0;
    for(int i=0;i<=n/2;i++)
    {
        if(s[i]=='4' || s[i]=='7')
        c++;
    }
    for(int i=(n/2)+1;i<n;i++)
    {
        if(s[i]=='4' || s[i]=='7')
        c++;
    }
    if(c==4 || c==7)
    cout<<"YES\n";
    else
    cout<<"NO\n";
    return 0;
}
