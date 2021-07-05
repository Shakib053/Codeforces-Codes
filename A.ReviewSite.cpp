#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,c=0,c1=0;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]==1) c++;
            else if(a[i]==2) c1++;
            if(a[i]==3 && c>=c1) c++;
        }
        cout<<c<<endl;
    }
    
    return 0;
}
