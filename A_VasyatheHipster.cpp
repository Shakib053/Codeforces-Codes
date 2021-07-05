#include<bits/stdc++.h>
#include<iterator>
#include<set>
#define ll long long
using namespace std;
int main()
{   
int a,b;
cin>>a>>b;
int ans1=min(a,b);
int c=max(a,b);
int ans2=c-ans1;
int r=ans2/2;
cout<<ans1<<" "<<r<<endl; 

return 0;
}

