#include<bits/stdc++.h>
#include<iterator>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
int n;
string s;
cin>>n>>s;
int a=0,b=0,cnt=0;
for(int i=0;i<s.size();i=i+2)
{
    if(s[i]==s[i+1])
    cnt++;
    if(s[i]=='a')
    a++;
    else if(s[i]=='b')
    b++;
    if(s[i+1]=='a')
    a++;
    else if(s[i+1]=='b')
    b++;
    if(a!=b)
    {
        if(s[i]=='a')
        s[i+1]='b';
        else if(s[i]=='b')
        s[i+1]='a';
        a=0;
        b=0;
    }
   
}
cout<<cnt<<endl;
cout<<s<<endl;
return 0;
}
