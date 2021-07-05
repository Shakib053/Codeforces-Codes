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
        int n,t1=0,m=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
            {
                if(s[i]=='T')
                t1++;
                else if(s[i]=='M')
                m++;
            }
        if(t1==m*2)
            {   int c=0,f=0;
                for(int i=0;i<n;i++)
                {
                    if(s[i]=='T')  
                    c++;
                    else
                    c--;
                    if(c<0)
                    {
                    f++;
                    break;
                    }
                }
                
                if(f==1)
                cout<<"NO\n";
                else{
                f=0,c=0;
                for(int i=n-1;i>=0;i--)
                     {
                        {
                            if(s[i]=='T')  
                            c++;
                            else
                            c--;
                            if(c<0){
                            f++;
                            break;
                            }
                        }
                        }
                        if(f==1)
                        cout<<"NO\n";
                        else
                        cout<<"YES\n";
                     }
                    
            }
                       else
                       cout<<"NO\n";
                }
                 
     return 0;
}