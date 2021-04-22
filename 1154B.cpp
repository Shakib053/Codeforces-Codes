#include<bits/stdc++.h>
#include<iterator>
#include<set>
#define ll long long
using namespace std;

int main()
{   
 int n;
 cin>>n;
 int a[n];
 for(int i=0;i<n;i++)
 {
     cin>>a[i];
 }
 sort(a,a+n);
 set<int> s;
 for(int i=0;i<n;i++)
 {
     s.insert(a[i]);
 }
  set<int> :: iterator it;
  vector<int> v;
  for(it=s.begin();it!=s.end();it++)
  {
     v.push_back(*it);
  }
 if(v.size()==1)
 cout<<0<<endl;
 if(v.size()==2)
 {
     if((v[1]-v[0])%2==0)
     cout<<(v[1]-v[0])/2<<endl;
     else
     cout<<v[1]-v[0]<<endl;
 }
 int d1,d2;
 if(v.size()==3)
 {
   d1=v[2]-v[1];
   d2=v[1]-v[0];
  if(d1==d2)
  cout<<d1<<endl;
  else
  cout<<-1<<endl;

 }
 if(v.size()>3)
 cout<<-1<<endl;
return 0;
}
