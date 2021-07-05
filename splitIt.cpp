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
    int a,b;
    string s;
    while (t--)
    {   
        
        cin>>a>>b>>s;
        int i;
        for(i=0;i<(a-1)/2;i++)
        {
            if(s[i]!=s[a-i-1]) 
            break;
        }
        if(i<b)
        cout<<"NO\n";
        else 
        cout<<"YES\n";
    }
    
	return 0;
}