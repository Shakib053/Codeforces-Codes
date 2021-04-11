#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        int peak=(n-1)/2;
        if(k>peak)
        cout<<-1<<endl;
        else
        {   
            int l=(k*2)+1;
            int s=n,c=1;
            for(int i=1;i<=l;i++)
            {
                if(i%2!=0)
                {
                    cout<<c<<" ";
                    c++;
                }
                else 
                {
                    cout<<s<<" ";
                    s--;
                }
            }
            for(int i=1;i<=n-l;i++)
            {
                cout<<c<<" ";
                c++;
            }
            cout<<endl;
        }
    }
    
    return 0;
}