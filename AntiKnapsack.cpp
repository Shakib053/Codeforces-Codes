#include<iostream>
#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;

#define ll long long
#define pi 3.1416
int main()
{   
	
    int t,c=0;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        cout<<a-((b+1)/2)<<endl;
        for(int i=a;i>=(b+1)/2;i--)
        {  
            if(i!=b)
            {
            cout<<i<<" ";
            }
        }
        cout<<endl;
    }
	return 0;
}