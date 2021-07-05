#include<bits/stdc++.h>
#include<iterator>
#include<string>
#define ll long long
using namespace std;
int main()
{
int n,c=0,count=0;
cin>>n;
vector<int>v;
while (1)
{
    if(n>3)
    {
        n=n-2;
        v.push_back(2);
    }
    if(n<=3)
    {
        break;
    }
}
v.push_back(n);
cout<<v.size();
cout<<endl;
for(int i=0;i<v.size();i++)
cout<<v[i]<<" ";
cout<<endl;

return 0;
}

