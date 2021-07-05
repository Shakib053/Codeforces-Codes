#include<bits/stdc++.h>
#include<iterator>
#include<string>
#define ll long long
using namespace std;
int main()
{
int t,a,b,m=0,c=0;
cin>>t;
while (t--)
{
    cin>>a>>b;
    if(a>b) m++;
    else if(a<b) c++;
}
if(m>c)
cout<<"Mishka\n";
else if(m<c)
cout<<"Chris\n";
else if(m==c)
cout<<"Friendship is magic!^^\n";
 
return 0;
}

