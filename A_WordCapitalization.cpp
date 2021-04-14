#include<bits/stdc++.h>
#include<map>
#include<iterator>
#define pi 3.1416
#define ll long long
using namespace std;
int main()
{
    string s;
    cin>>s;
    if(s[0]>=97 && s[0]<=122)
        s[0]=s[0]-32;
    for(int i=0;i<s.size();i++)
    {  
        cout<<s[i];
    }
    cout<<endl;

    return 0;
}
