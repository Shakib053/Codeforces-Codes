#include<bits/stdc++.h>
#include<iterator>
#include<set>
#define pi 3.1415
#define ll long long
using namespace std;
int main()
{   
    int n,h,c=0;
    cin>>n>>h;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    } 
    for(int i=0;i<n;i++)
    {
        if(a[i]>h)
        c++;
    } 
    int x=n-c;
    cout<<x+c*2<<endl;
    return 0;
}
