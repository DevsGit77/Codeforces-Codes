#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;


void Ugly()
{
    int n;
    cin>>n;

    string s, st1 = "map", st2 = "pie";
    cin>>s;

    int res = 0;

    for(int i=0; i<s.length(); )
    {
        if(s[i] == st1[0] && s[i+1] == st1[1] && s[i+2] == st1[2])
        {
            res++;
            i += 3;
        }

        else if(s[i] == st2[0] && s[i+1] == st2[1] && s[i+2] == st2[2])
        {
            res++;
            i += 3;
        }
        else
            i++;
    }

    cout<<res<<endl;
}

int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
        Ugly();
    }

    return 0;
}
