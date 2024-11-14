#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int t;
    string s;
    string s1 = "abc";

    cin>>t;

    for(int i = 0; i<t; i++)
    {
        cin>>s;
        if(s==s1)
        {
            cout<<"YES"<<endl;
        }

        else
        {
            if(s[0]== 'b' && s[1] == 'a')
            {
                //swap(s[0],s[1]);
                cout<<"YES"<<endl;
            }
            else if(s[1]=='c' && s[2]=='b')
            {
               // swap(s[1],s[2]);
                cout<<"YES"<<endl;
            }
            else if(s[0]=='c' && s[2]=='a')
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }


    return 0;
}
