#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int i,l,c1=0,c2=0,c3=0;
    string s;
    cin>>s;

    l = s.size();

    for(i=0; i<l; i++)
    {
        if(s[i]=='0')
        {
            c1++;
            c2 =0;
        }
        else
        {
            c2++;
            c1=0;
        }

        if(c1==7 ||c2==7)
        {
            c3 = 1;
        }
    }
    if(c3==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
       cout<<"NO"<<endl;
    }


    return 0;
}
