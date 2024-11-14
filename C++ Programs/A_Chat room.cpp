#include <iostream>
#include <string>

using namespace std;
int main()
{
    int c=0,c1=0;
    string s;
    string x = "hello";
    cin>>s;

    for(int i = 0; i<s.size(); i++)
    {
        if(s[i]==x[c])
        {
            c++;
            c1++;
        }
    }
    if(c==5)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}
