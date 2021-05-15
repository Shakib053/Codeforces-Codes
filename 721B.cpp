#include<bits/stdc++.h>
#include<iterator>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
int n,k;
cin>>n>>k;
vector<int>v;
while (n--)
{ 
   string s;
   cin>>s;
   int z=s.size();
   v.push_back(z);
}
string p;
cin>>p;
int pl=p.size();
sort(v.begin(),v.end());
/*for(int i=0;i<v.size();i++)
cout<<v[i]<<" ";
cout<<endl;*/
int bc=0,wc=0,t=0;
for(int i=0;i<v.size();i++)
{
    bc++;
    t++;
    if(v[i]==pl)
    {
        break;
    }
    if(t==k) bc=bc+5,t=0;
}
t=0;
for(int i=0;i<v.size();i++)
{
    wc++;
    t++;
    if(v[i]==pl && (v[i+1]!=pl || i==v.size()-1))
    {
        break;
    }
    if(t==k) wc=wc+5,t=0;
}
cout<<bc<<" "<<wc<<endl;
return 0;
}
