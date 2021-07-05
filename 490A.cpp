#include<bits/stdc++.h>
#include<iterator>
#include<string>
#define ll long long
using namespace std;
int main()
{
int n,a;
cin>>n;
vector<int>v1,v2,v3;
for(int i=1;i<=n;i++)
{
    cin>>a;
    if(a==1) v1.push_back(i);
    else if(a==2) v2.push_back(i);
    else if(a==3) v3.push_back(i);
}
int s1=v1.size();
int s2=v2.size();
int s3=v3.size();
int mn=min(s1,min(s2,s3));
cout<<mn<<endl;
if(mn==0)
return 0;
else 
{ 
    
    for (int i=0;i<mn;i++)
    {
        cout<<v1[i]<<" "<<v2[i]<<" "<<v3[i]<<endl;
    }
    
}
 
return 0;
}

