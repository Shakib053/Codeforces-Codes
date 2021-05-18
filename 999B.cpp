#include<bits/stdc++.h>
#include<iterator>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
int t;
cin>>t;
string s;
cin>>s;
string ans="";
for(int i=0;i<t;i++)
{
    if(t%(i+1)==0)
    {
        reverse(s.begin(),s.begin()+(i+1));
    }
}

cout<<s<<endl;
return 0;
}
