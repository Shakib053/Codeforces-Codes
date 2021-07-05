#include<bits/stdc++.h>
#include<iterator>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
int n;
cin>>n;
string s;
cin>>s;
if(n==1)
cout<<s<<endl;
else if(n==2)
cout<<s<<endl;
else if(n%2==1)
{
    vector<char>ans;
    for(int i=0;i<s.size();i++)
    {   
        char x=s[i];
        if(i==0)
        ans.push_back(x);
        else
        {
            if(i%2==1)
            ans.insert(ans.begin(),1,x);
            else
            ans.push_back(x);
        }
    }
    for(auto i:ans)
    cout<<i;
}
else
{
    vector<char>ans;
    for(int i=n-2;i>=0;i=i-2)
    {  
        char x=s[i];
        ans.push_back(x);
    }
    for(int i=1;i<n;i=i+2)
    {  
        char x=s[i];
        ans.push_back(x);
    }
    for(auto i:ans)
    cout<<i;
}
return 0;
}
