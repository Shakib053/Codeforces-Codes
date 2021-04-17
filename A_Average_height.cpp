#include<bits/stdc++.h>
#include<iterator>
#include<set>
#include<vector>
#define pi 3.1415
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
        vector<int>v,v1;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]%2!=0)
            v.push_back(a[i]);
            else
            v1.push_back(a[i]);
        }
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        for(int i=0;i<v1.size();i++)
        {
            cout<<v1[i]<<" ";
        }
        cout<<endl;
    }
    
     return 0;
}
