#include<bits/stdc++.h>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
ll n;
cin>>n;
string s;
cin>>s;
set<char>st;
for(ll i=0;i<n;i++)
{
  st.insert(s[i]);
}
if(n<=26 && st.size()<=26)
cout<<n-st.size()<<endl;
else
cout<<-1<<endl;
return 0;
}
