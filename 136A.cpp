#include<bits/stdc++.h>
#include<iterator>
#include<set>
#include<vector>
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
    vector<int> v;
    int c=0;
    for(int i=0;i<n;i++)
    {  
        c++;
        if(c<=n){
        for(int j=0;j<n;j++)
        {
          if(a[j]==c)
          v.push_back(j+1);
        }
    }
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}
