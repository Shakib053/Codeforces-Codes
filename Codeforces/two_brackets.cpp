#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string b;
        int c=0,c1=0,count=0;
        cin>>b;
        int n=b.size();
        for(int i=0;i<n;i++)
        {
            if(b[i]=='(')
            c++;
            else if(b[i]=='[')
            c1++;
            else if(b[i]==')' && c>0)
            {
            count++;
            c--;
            }
            else if(b[i]==']' && c1>0)
            {
            count++;
            c1--;
            }
        }
        cout<<count<<endl;
          
    }
    
    return 0;
    
} 
