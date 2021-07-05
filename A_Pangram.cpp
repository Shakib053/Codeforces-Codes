#include<bits/stdc++.h>
#include<iterator>
#include<set>
#define ll long long
using namespace std;
int main()
{   

int n;
cin>>n;
int c=0;
string s;
cin>>s;
if(s.size()<26){
cout<<"NO\n";
return 0;
}
transform(s.begin(),s.end(),s.begin(),:: toupper);
sort(s.begin(),s.end());
for(int i=0;i<s.size();i++)
{
    if(s[i]>=65 && s[i]<=97 && s[i]!=s[i+1])
    c++;
}
if(c>=26)
cout<<"YES\n";
else
cout<<"NO\n";

return 0;

}

