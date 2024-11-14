#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;

    cin>>s;
    bool istrue = true;

    for(int j=1; j<s.size(); j++)
    {
        if(s[j]>=97)
        {
            istrue = false;
            break;
        }
    }

    if(istrue)
    {

        for(int k=0; k<s.size(); k++)
        {
            if(s[k]>=97)
            {
                s[k] = s[k] - 32;
            }
            else
            {
                s[k] = s[k] + 32;
            }
        }
        cout<<s;
    }
    else
    {
        cout<<s;
    }


    return 0;
}
