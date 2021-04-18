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
    double sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    sum=(sum/(n*100))*100;
    cout<<sum<<endl;
   
    return 0;
}
