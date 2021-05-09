#include<bits/stdc++.h>
#include<iterator>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
    int n,ans=0;
string s;
cin>>n;
cin>>s;
for(int i=0;i<n;i++)
{
 if(s[i]=='x' && s[i+1]=='x' && s[i+2]=='x')
 ans++;
}
cout<<ans<<endl;
return 0;
}
