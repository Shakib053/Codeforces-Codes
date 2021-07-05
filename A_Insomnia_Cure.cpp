#include<bits/stdc++.h>
#include<iterator>
#include<set>
#define pi 3.1415
#define ll long long
using namespace std;
int main()
{   
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    set<int> s;
    int a[d];
    for(int i=0;i<d;i++)
    {
        a[i]=i+1;
    }
    for(int i=0;i<d;i++)
    {
        if(a[i]%k==0)
        s.insert(a[i]);
        if(a[i]%l==0)
        s.insert(a[i]);
        if(a[i]%m==0)
        s.insert(a[i]);
        if(a[i]%n==0)
        s.insert(a[i]);
    }
    
    cout<<s.size()<<endl;
    return 0;
}
