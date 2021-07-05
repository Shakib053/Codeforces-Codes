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
sort(s.begin(),s.end());
vector<int>ans;
for(int i=0;i<s.size();i++)
{
    if(s[i]=='n')
    ans.push_back(1);
    else if(s[i]=='z')
    ans.push_back(0);
}
for(auto i:ans)
cout<<i<<" ";
cout<<endl;
return 0;
}
