#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    string s;
    cin>>t;
    while (t--)
    {
        cin>>s; 
        n=s.size();
        if(n<=10)
        cout<<s<<endl;
        else
        cout<<s[0]<<n-2<<s[n-1]<<endl;

    }
    
    return 0;
} 