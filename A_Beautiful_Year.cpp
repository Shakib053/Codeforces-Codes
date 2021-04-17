#include<bits/stdc++.h>
#include<iterator>
#include<set>
#define pi 3.1415
#define ll long long
using namespace std;
int main()
{   
    
    int x;
    cin>>x;
    x++;
    while (1)
    {   
        int n=x;
        int a=n/1000;
        n=n%1000;
        int b=n/100;
        n=n%100;
        int c=n/10;
        n=n%10;
        int d=n;
      
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
        {
            cout<<x<<endl;
            return 0;
        }   
          x++;
    }
    
    return 0;
}
