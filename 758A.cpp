#include<bits/stdc++.h>
#include<iterator>
#include<string>
#define ll long long
using namespace std;
int main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
sort(a,a+n);
int sum=0;
for(int i=0;i<n;i++)
{
    sum=sum+(a[n-1]-a[i]);
} 
cout<<sum<<endl;
return 0;
}

