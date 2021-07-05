#include<bits/stdc++.h>
#include<iterator>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
int n;
cin>>n;
pair<int,int>p;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
int l=INT_MAX;
int aa,bb;
int ans1,ans2;
    for(int j=0;j<n-1;j++)
    {
        if(abs(a[j+1]-a[j])<l)
        {
        aa=a[j];
        bb=a[j+1];
        ans1=j+1;
        ans2=j+2;
        l=min(l,abs(a[j+1]-a[j]));
        }
    }
    if(abs(a[0]-a[n-1])<l)
    {
        ans1=1;
        ans2=n;

    }

cout<<ans1<<" "<<ans2<<endl;
return 0;
}
