#include<bits/stdc++.h>
#include<iterator>
#include<set>
#define pi 3.1415
#define ll long long
using namespace std;
int main()
{   
    set<int> s;
    int t=4;
    while (t--)
    {
        int a;
        cin>>a;
        s.insert(a);
    }
    cout<<4-s.size()<<endl;
    return 0;
}
