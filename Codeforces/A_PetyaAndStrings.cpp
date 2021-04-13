#include<bits/stdc++.h>
#include<map>
#include<iterator>
#define pi 3.1416
#define ll long long
using namespace std;
int main()
{
    
    string a,b;
    int c=0,c1=0,y1,x1,y,i;
    cin>>a>>b;
    int x=a.size();
    for(i=0;i<x;i++)
    {
        x1=tolower(a[i]);
        y1=tolower(b[i]);
        if(x1==y1)
        continue;
        else if(x1>y1)
        {
            cout<<1<<endl;
            return 0;
        }
        else if(x1<y1)
        {
            cout<<-1<<endl;
            return 0;
        }
       
    }
     if(i==x)
        cout<<0<<endl;


    return 0;
}
