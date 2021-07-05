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
string s;
cin>>s;
string left,right;
for(int i=0;i<n;i++)
left=left+s[i];
for(int i=n;i<2*n;i++)
right=right+s[i];
sort(left.begin(),left.end());
sort(right.begin(),right.end());
int big=0,small=0;
for(int i=0;i<n;i++)
{
    if(left[i]>right[i])
    big++;
   else if(left[i]<right[i])
   small++;
}
if(small==n || big==n)
cout<<"YES\n";
else
cout<<"NO\n";
return 0;
}
