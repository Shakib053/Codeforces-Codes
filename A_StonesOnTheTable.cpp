#include<bits/stdc++.h>
#include<map>
#include<iterator>
#define pi 3.1416
#define ll long long
using namespace std;
int main()
{
    int n,c=0;
    string s;
    cin>>n>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]==s[i+1])
        c++;
    }
    cout<<c<<endl;
    return 0;
}