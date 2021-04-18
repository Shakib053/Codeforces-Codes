#include<bits/stdc++.h>
#include<iterator>
#include<set>
#define pi 3.1415
#define ll long long
using namespace std;
int main()
{   
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int aa[n];
    for(int i=0;i<n;i++)
    {
        aa[i]=a[i];
    }
    sort(aa,aa+n);
    int mx=aa[n-1],mn=aa[0],m,mi;
    for(int i=0;i<n;i++)
    {
        if(a[i]==mx)
        {
            m=i;
            break;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==mn)
        mi=i;
        
        
    }
    if(m>mi)
    mi++;
    cout<<m+(n-1-mi)<<endl;
   
    return 0;
}
