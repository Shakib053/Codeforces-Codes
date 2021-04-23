#include<bits/stdc++.h>
#include<iterator>
#include<string>
#define ll long long
using namespace std;
int main()
{
int t;
cin>>t;
while (t--)
{
    int n,k;
    cin>>n>>k;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    cin>>b[i];
    sort(a,a+n);
    sort(b,b+n);
    for(int i=0,j=n-1,l=0;i<n,j>=0,l<k;j--,i++,l++)
    {
        if(a[i]<b[j])
        swap(a[i],b[j]);
    }
    int sum=0;
    for(int i=0;i<n;i++)
    sum=sum+a[i];
    cout<<sum<<endl;
}

 
return 0;
}

