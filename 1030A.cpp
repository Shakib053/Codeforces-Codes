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
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
       { 
           cout<<"HARD\n";
           break;
       }
        else
        c++;
    }
    if(c==n)
    cout<<"EASY\n";
    return 0;
}
