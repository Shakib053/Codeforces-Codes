#include<bits/stdc++.h>
#include<iterator>
#include<string>
#define ll long long
using namespace std;
int main()
{
int n;
cin>>n;
int c=0;
for(int i=1;i<=n/2;i++)
{
    int ff=n-i;
    if(ff%i==0)
    c++;
}
cout<<c<<endl;
return 0;
}
