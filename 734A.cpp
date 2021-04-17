#include<bits/stdc++.h>
#include<iterator>
#include<set>
#define pi 3.1415
#define ll long long
using namespace std;
int main()
{    
    int n,a=0,d=0;
    string s;
    cin>>n>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='A')
        a++;
        else
        d++;
    }
    if(a>d)
    cout<<"Anton\n";
    else if(d>a)
    cout<<"Danik\n";
    else if(a==d)
    cout<<"Friendship\n";
    return 0;
}
