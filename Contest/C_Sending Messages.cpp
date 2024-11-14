#include <bits/stdc++.h>
#define ll long long
using namespace std;

void SM()
{
    ll nm, pc, a, b;
    cin>>nm>>pc>>a>>b;


    ll e, rem = 0;

    for(int i=0; i<nm; i++)
    {
        cin>>e;
        pc -= min(b, abs(e - rem) * a);
        rem = e;
    }

    if (pc > 0)
        cout<< "YES"<<endl;

    else
        cout<<"NO"<<endl;
}

int main()
{
    int tc;
    cin >> tc;

    while(tc--)
    {
        SM();
    }

    return 0;
}
