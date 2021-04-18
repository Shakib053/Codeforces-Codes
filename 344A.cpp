#include<bits/stdc++.h>
#include<iterator>
#include<set>
#define pi 3.1415
#define ll long long
using namespace std;
int main()
{   
    int t;
    cin>>t;
    vector<int> v;
    while (t--)
    {
        string s;
        cin>>s;
        if(s=="10")
        v.push_back(0);
        else if(s=="01")
        v.push_back(1);
    }
    int c=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]!=v[i+1])
        c++;
        if(i==v.size()-1 && v[i]==v[i+1])
        c++;
    }
    cout<<c<<endl;
    return 0;
}
