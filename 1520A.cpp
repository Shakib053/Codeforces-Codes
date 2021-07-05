#include<bits/stdc++.h>
#include<iterator>
#include <math.h>
#include<numeric>
#define ll long long
#define mod 1000000007
using namespace std;
int main()
{
int t;
cin>>t;
while (t--)
{ 
    int n;
    cin>>n;
    string s;
    cin>>s;
    int flag=0,c;
    for(int i=0;i<s.size();i++)
    {   
        c=1;
        for(int j=i+1;j<s.size();j++)
        {
            if(s[i]!=s[j])
            {
                c=0;
            }
            if(s[i]==s[j] && c==0)
            {
                flag=1;
                break;
            }

        }
        if(flag==1)
        {
            break;
        }
    }
    if(flag==1)
    cout<<"NO\n";
    else if(flag==0)
    cout<<"YES\n";
   
}


return 0;
}
