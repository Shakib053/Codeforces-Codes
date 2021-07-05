#include<bits/stdc++.h>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
    string s;
    cin>>s;
int t;
cin>>t;
vector<int>v;
 int ans=0;
 v.push_back(0);
for(int i=0;i<s.size();i++)
 {
     if(s[i]==s[i+1])
     ans++;
     v.push_back(ans);
 }
while (t--)
{
 int l,r;
 cin>>l>>r;
int cnt=v[r-1]-v[l-1];
cout<<cnt<<endl;
}

 
return 0;
}
