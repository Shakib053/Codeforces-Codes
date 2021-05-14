#include<bits/stdc++.h>
#include<iterator>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
string s;
cin>>s;
int c=0;
for(int i=1;i<s.size();i=i+1)
{
    if(s[i]==s[i-1])
    {
     s.erase(i-1,2);
     c++;
     i=i-2;
    }
    
}
//cout<<c<<endl;
if(c%2==0)
cout<<"No\n";
else
cout<<"Yes\n";
return 0;
}
