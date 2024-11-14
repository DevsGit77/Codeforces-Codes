#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;

void Chewbacca()
{
    string s;
    cin>>s;


    if(s[0]=='9')
    {
        for(int i=1; i<s.length(); i++)
        {
            int d = s[i]-'0';
            if(d>4)
                s[i] = (9-d) + '0';
        }
    }
    else
    {
        for(int i=0; i<s.length(); i++)
        {
            int d = s[i]-'0';
            if(d>4)
                s[i] = (9-d) + '0';
        }

    }



    cout<<s<<endl;
}


int main()
{
    speed;

//    int tc;
//    cin>>tc;
//
//    while(tc--)
//    {
//
//    }

    Chewbacca();

    return 0;
}
