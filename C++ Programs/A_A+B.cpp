#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;


void Sum()
{
    string s;
    cin>>s;

    int a = s[0]-'0', b = s[2]-'0';

    cout<<(a+b)<<endl;
}


int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
        Sum();
    }

    return 0;
}
