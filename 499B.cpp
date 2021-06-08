#include<bits/stdc++.h>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
int n,m;
cin>>n>>m;
vector<string>teacher;
vector<string>v1,v2;
while (m--)
{
    string s,s1;
    cin>>s>>s1;
    v1.push_back(s);
    v2.push_back(s1);
}
while (n--)
{
    string s3;
    cin>>s3;
    teacher.push_back(s3);
}
vector<string>ans;
for(int i=0;i<teacher.size();i++)
{
    for(int j=0;j<v1.size();j++)
    {
       if(teacher[i]==v1[j] || teacher[i]==v2[j])
       {
           string c1=v1[j];
           string c2=v2[j];
           int cnt1=c1.size();
           int cnt2=c2.size();
           if(cnt1<=cnt2)
           {
               ans.push_back(v1[j]);
               break;
           }
           else
           {
               ans.push_back(v2[j]);
               break;
           }
       }
    }
}
for(auto i : ans)
cout<<i<<" ";
cout<<endl;


return 0;
}
