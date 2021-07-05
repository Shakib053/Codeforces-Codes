#include<bits/stdc++.h>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
string s;
cin>>s;
int n=s.size();
transform(s.begin(),s.end(),s.begin(),:: tolower);
for(int i=0;i<n;i++)
{
    if(s[i]!='a' && s[i]!='e' && s[i]!='y' && s[i]!='i' && s[i]!='o' && s[i]!='u')
    cout<<"."<<s[i];
}
cout<<endl;
 
return 0;
}
