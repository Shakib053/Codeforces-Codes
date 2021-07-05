#include<bits/stdc++.h>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
string s;
cin>>s;
int fo=0,se=0;
for(int i=0;i<s.size();i++)
{
    if(s[i]=='4')
    fo++;
    else if(s[i]=='7')
    se++;
}
if(se==0 && fo==0)
cout<<-1<<endl;
else if(fo>=se)
cout<<4<<endl;
else
cout<<7<<endl; 
 
return 0;
}
