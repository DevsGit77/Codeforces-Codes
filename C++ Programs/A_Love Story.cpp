
#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using lld = long double;
using namespace std;


void Love_Story()
{
    string s, r = "codeforces";
    cin>>s;

    int res=0;

    for(int i=0; i<10; i++)
    {
        if(s[i] != r[i])
            res++;
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
        Love_Story();
    }

    return 0;
}
