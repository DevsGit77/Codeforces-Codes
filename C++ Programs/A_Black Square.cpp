#include <bits/stdc++.h>
#define ll long long
using namespace std;

void BlackSquare()
{
    int ara[5];
    int ans=0;

    for(int i=1; i<=4; i++)
    {
        cin>>ara[i];
    }
    string str;
    cin>>str;

    for(int i=0; i<str.size(); i++)
    {
        ans += ara[str[i] - '0'];
    }

    cout<<ans<<endl;
}


int main()
{
    BlackSquare();

    return 0;
}
