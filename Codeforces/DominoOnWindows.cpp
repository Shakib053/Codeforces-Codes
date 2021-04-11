#include<iostream>
#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;

#define ll long long
#define pi 3.1416
int main()
{   
	
    int t;
    cin>>t;
    while (t--)
    {
        int n,k1,k2,w,b;
        cin>>n>>k1>>k2;
        cin>>w>>b;
        int c=(k1+k2)/2;
        int c1=((n-k1)+(n-k2))/2;
        if(c>=w && c1>=b) cout<<"YES\n";
        else cout<<"NO\n";
    }
    
	return 0;
}