#include<bits/stdc++.h>
#include<iterator>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int ispal(string s)
{
    int n=s.size();
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]!=s[n-i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    return 0;
    else
    return 1;
}
int main()
{
int n,m;
cin>>n>>m;
string s[100];
set<string>st;
for(int i=0;i<n;i++)
{
    cin>>s[i];
    st.insert(s[i]);
}
vector<string>r,l;
string middle;
for(int i=0;i<n;i++)
{  
    string f=s[i];
   if(ispal(f)==1)
   {
     middle=f;
   }
}
for(int i=0;i<n;i++)
{
 for(int j=i+1;j<n;j++)
 {
     string check=s[j];
     reverse(check.begin(),check.end());
     if(s[i]==check)
     {
         l.push_back(s[i]);
         r.push_back(s[j]);
         st.erase(s[i]);
         st.erase(s[j]);
     }
 }
}
cout<<l.size()*m*2+middle.size()<<endl;
for(auto i: l)
cout<<i;
cout<<middle;
reverse(r.begin(),r.end());
for(auto i: r)
cout<<i;
cout<<endl;
return 0;
}
