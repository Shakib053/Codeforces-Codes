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
while (t--)
{  
  int n;
  cin>>n;
  string s;
  cin>>s;
  int cnt[26]={0};
  int flag=0;
  for(int i=0;i<n;i++)
  {
      cnt[s[i]-'a']=1;
  }
  for(int i=0;i<26;i++)
  {
      if(cnt[i]==0)
      {
          cout<<(char)('a'+i)<<endl;
          flag=1;
          break;
      }
  }  
  if(flag==0)
  {
      set<string>ss;
      for(int i=0;i<n-1;i++)
      {
          string store="";
          store+=s[i];
          store+=s[i+1];
          ss.insert(store);
      }
      for(int i=0;i<26;i++)
      {
          for(int j=0;j<26;j++)
          {
             string store="";
             store+=(char)('a'+i);
             store+=(char)('a'+j);
             if(ss.find(store)==ss.end())
             {
             cout<<store<<endl;
             flag=1;
             break;
             }
             
          }
          if(flag==1)
          break;
      }
  }
  if(flag==0)
  {
  set<string>ss;
      for(int i=0;i<n-2;i++)
      {
          string store="";
          store=store+s[i];
          store=store+s[i+1];
          store=store+s[i+2];
          ss.insert(store);
      }
      for(int i=0;i<26;i++)
      {
          for(int j=0;j<26;j++)
          {
             string store="a";
             store+=(char)('a'+i);
             store+=(char)('a'+j);
             if(ss.find(store)==ss.end())
             {
                 flag=1;
                 cout<<store<<endl;
                 break;
             }
             
          }
          if(flag==1)
          break;
      }
  }
}
return 0;
}
