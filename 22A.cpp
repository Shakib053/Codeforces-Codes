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
int a[t];
for(int i=0;i<t;i++)
cin>>a[i];
set<int>s;
for(int i=0;i<t;i++)
s.insert(a[i]);
if(s.size()<2)
cout<<"NO\n";
else
{  
auto it = s.begin();
it++;
cout<<*it<<endl;
}

return 0;
}
