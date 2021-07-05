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
string ans="";
int j=0;
for(int i=0;i<n;i++)
{   
    if(i==j*(j+3)/2)
    {
    char x=s[i];
    ans.push_back(x);
    j++;
    }
    
}
cout<<ans<<endl;

return 0;
}
