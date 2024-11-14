#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string s,new_string;
    cin>>s;

    for(int i = 0; i<s.size(); i++)
    {
        if(s[i]== 'a' || s[i]=='A' || s[i]=='E' || s[i]=='e'|| s[i]=='I'|| s[i]=='i'||s[i]=='O'||s[i]=='o' || s[i]=='U' || s[i]=='u'||s[i]=='Y'|| s[i]=='y')
        {
            continue;
        }
        else
        {
            new_string += '.';
            new_string += tolower(s[i]);
        }
    }
    cout<<new_string<<endl;

    return 0;
}
