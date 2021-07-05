#include<bits/stdc++.h>
#include<iterator>
#include<set>
#define pi 3.1415
#define ll long long
using namespace std;
int main()
{   
    string s,s1;
    cin>>s>>s1;
    vector<int>v;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=s1[i])
        v.push_back(1);
        else
        v.push_back(0);
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i];
    }
    cout<<endl;
    return 0;
}
