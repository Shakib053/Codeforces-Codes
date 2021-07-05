#include<bits/stdc++.h>
#include<iterator>
#include<set>
#define ll long long
using namespace std;

int main()
{   
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
int p=0,c=0;
for(int i=0;i<n;i++)
{
    if(a[i]!=-1)
    p=p+a[i];
    else if(a[i]==-1 && p!=0)
    p--;
    else if(a[i]==-1)
    c++;
}

cout<<c<<endl;

return 0;
}

