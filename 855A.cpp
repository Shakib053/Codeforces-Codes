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
set<string>s;
while (t--)
{ 
  string ss;
  cin>>ss;
  if(s.count(ss)==1)
  cout<<"YES\n";
  else
  {  
      s.insert(ss);
     cout<<"NO\n";
  }

}


return 0;
}
