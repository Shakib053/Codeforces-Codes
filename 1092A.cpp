#include<bits/stdc++.h>
#include<iterator>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
int t;
cin>>t;
while (t--)
{ 
    int m,n,cnt=0;
    cin>>m>>n;
    string s;
    char c='a';
    for(int i=0;i<m;i++)
    {
        s=s+(char) c;
        c++;
        cnt++;
        if(cnt==n)
        {
            c='a';
            cnt=0;
        }
    
    }
    cout<<s<<endl;
    
   
}

return 0;
}
