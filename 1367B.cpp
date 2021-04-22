#include<bits/stdc++.h>
#include<iterator>
#include<set>
#define ll long long
using namespace std;
int main()
{   
int t;
cin>>t;
while (t--)
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    if(n==1)
    {
        if(a[0]%2==0)
        cout<<0<<endl;
        else
        cout<<-1<<endl;
    }
    else
    {
        int c=0,c1=0,f=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0 && a[i]%2!=0)
            c++;
            else if(i%2!=0 && a[i]%2==0)
            c1++;
            else 
            f++;
        }
        if(c==c1)
        cout<<c<<endl;
        else if(f==n)
        cout<<0<<endl;
        else
        cout<<-1<<endl;
    }
}



return 0;
}

