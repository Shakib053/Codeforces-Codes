#include<bits/stdc++.h>
#include<iterator>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
string s;
cin>>s;
int n=s.size(),check;
for(int i=0;i<n;i++)
{
    if(s[i]=='.')
    {
        check=i;
        break;
    }
}
char ch=s[check-1];
int x=(int)ch-48;
if(s[check-1]=='9')
cout<<"GOTO Vasilisa.\n";
else if(s[check+1]=='5' || s[check+1]=='6' || s[check+1]=='7' || s[check+1]=='8' || s[check+1]=='9')
{
    
    if((check-1)!=0)
    {
        for(int i=0;i<check-1;i++)
        cout<<s[i];
    }
    cout<<x+1;
    cout<<endl;
}
else
{
if((check-1)!=0)
    {
        for(int i=0;i<check-1;i++)
        cout<<s[i];
    }
    cout<<x;
    cout<<endl;
}


return 0;
}
