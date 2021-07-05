#include<bits/stdc++.h>
#include<iterator>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
int n,m;
   set<int>s;
cin>>n>>m;
while (n--)
{ 
   int a;
   cin>>a;
   while (a--)
   {
       int x;
       cin>>x;
       s.insert(x);
   }
   
}
if(s.size()!=m)
cout<<"NO\n";
else
cout<<"YES\n";

return 0;
}
