#include<bits/stdc++.h>
#include<iterator>
#include<set>
#define ll long long
using namespace std;
int main()
{   

string s,s1,s2;
cin>>s>>s1>>s2;
int n1=s.size();
int n2=s1.size();
int n3=s2.size();
if(n3!=n1+n2)
{
    cout<<"NO\n";
    return 0;
}
string s3=s+s1;
sort(s3.begin(),s3.end());
sort(s2.begin(),s2.end());
int c=0;
for(int i=0;i<s3.size();i++)
{
    if(s2[i]==s3[i])
    c++;
}
if(c==s2.size())
cout<<"YES\n";
else
cout<<"NO\n";
return 0;

}

