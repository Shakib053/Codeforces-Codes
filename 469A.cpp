#include<bits/stdc++.h>
#include<iterator>
#include<set>
#define pi 3.1415
#define ll long long
using namespace std;
int main()
{   
    int l,p,q;
    cin>>l;
    cin>>p;
    int x[p];
    for(int i=0;i<p;i++)
    {
        cin>>x[i];
    }
   cin>>q;
   int y[q];
   for(int i=0;i<q;i++)
   {
       cin>>y[i];
   }
   set<int> s;
    for(int i=0;i<p;i++)
    {
        s.insert(x[i]);
    }
     for(int i=0;i<q;i++)
    {
        s.insert(y[i]);
    }
    int z=s.size();
    if(z==l)
    cout<<"I become the guy.\n";
    else
    cout<<"Oh, my keyboard!\n";
    return 0;
}
