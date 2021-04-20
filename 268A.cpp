#include<bits/stdc++.h>
#include<iterator>
#include<set>
#define ll long long
using namespace std;
int main()
{   

int n;
cin>>n;
vector<int> v,v1;
while(n--)
{
int a,b;
cin>>a>>b;
v.push_back(a);
v1.push_back(b);
}
int c=0;
for(int i=0;i<v.size();i++)
{
    for(int j=0;j<v1.size();j++)
    {
        if(v[i]==v1[j])
        c++;
    }
}
cout<<c<<endl;
return 0;
}

