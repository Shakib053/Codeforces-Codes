#include<bits/stdc++.h>
#include<map>
#include<vector>
#include<iterator>
#define pi 3.1416
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        vector<int>v,v1;
        ll int sum=0;
        int n;
        ll int x;
        int a;
        cin>>n>>x;
        for(int i=0;i<n;i++)
        {
           cin>>a;
           v.push_back(a);
           v1.push_back(1);
        }
        ll int j=0;
        
        while (1)
        { 
           ll int z=v[j];
            if(z%x==0){
               v.push_back(z/x);
               v1.push_back(v1[j]*x);
                
            j++;
            }
            else 
            break;     
        }
        for(ll i1=0;i1<v.size();i1++)
        {
          sum=sum+(v[i1]*v1[i1]);
        }
        cout<<sum<<endl;
    
        
    }
    
    return 0;
}