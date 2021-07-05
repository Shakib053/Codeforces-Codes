#include<bits/stdc++.h>
#include<map>
#include<iterator>
#define pi 3.1416
#define ll long long
using namespace std;
int main()
{
    string s;
    cin>>s;
    int c=0,sm=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>=65 && s[i]<91)
        c++;
        if(s[i]>=97 && s[i]<123)
        sm++;
    }
    if(c>sm)
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout << s << endl;
    }
    else
    {
         transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout << s << endl;
    }
    return 0;
}