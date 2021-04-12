#include <iostream>
 
using namespace std;
 
int main()
{
    int t,c=0;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='+' && s[i+1]=='+')
            {
                c++;
            }
            else if(s[i]=='-' && s[i+1]=='-')
            c--;
        }
    }
    
    std::cout << c << std::endl;
    return 0;
}
