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
   string s;
   cin>>s;
   int n=s.size();
   if(s[n-2]=='p' && s[n-1]=='o')
   cout<<"FILIPINO\n";
   else if(s[n-4]=='d' && s[n-3]=='e' && s[n-2]=='s' && s[n-1]=='u')
   cout<<"JAPANESE\n";
   else if(s[n-4]=='m' && s[n-3]=='a' && s[n-2]=='s' && s[n-1]=='u')
   cout<<"JAPANESE\n";
   else if(s[n-5]=='m' && s[n-4]=='n' && s[n-3]=='i' && s[n-2]=='d' && s[n-1]=='a')
   cout<<"KOREAN\n";
}


return 0;
}
