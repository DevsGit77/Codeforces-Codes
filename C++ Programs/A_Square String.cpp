#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;

void Square_String()
{
    string s, s1="", s2="";
    cin>>s;

    int l = s.size();

    if(l%2 == 1)
        cout<<"NO"<<endl;
    else
    {
        for(int i=0; i<l/2; i++)
            s1 += s[i];

        for(int i = l/2; i<l; i++)
            s2 += s[i];

        if(s1==s2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }


}


int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
        Square_String();
    }

    return 0;
}
