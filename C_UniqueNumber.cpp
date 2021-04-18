#include<bits/stdc++.h>
#include<iterator>
#include<set>
#define pi 3.1415
#define ll long long
using namespace std;
int main()
{   
    int t;
    cin>>t;
    while (t--)
    {
        int x;
        cin>>x;
        if(x>45)
        cout<<-1<<endl;
        else
        {  
            
            vector<int> v;
            for(int i=9;i>=1;i--)
            {
                if(x>=i)
                {
                v.push_back(i);
                x=x-i;
                }
                
            }
            for(int i=v.size()-1;i>=0;i--)
            {
                cout<<v[i];
            }
            cout<<endl;
        }
    }

   
    return 0;
}
