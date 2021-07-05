#include<bits/stdc++.h>
#include<iterator>
#include<set>
#define ll long long
using namespace std;

int main()
{   
int t;
cin>>t;
while (t--)
{
    string s;
    cin>>s;
    if(s.size()==2)
    cout<<s<<endl;
    else if(s.size()>2)
    {   
        vector<string> s1;
        for(int i=0;i<s.size()-1;i=i+2)
        {
           cout<<s[i];
        }
        cout<<s[s.size()-1]<<endl;
    }
}





return 0;
}

