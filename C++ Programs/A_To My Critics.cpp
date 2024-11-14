#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;

void Critics()
{
    int x, y, z;
    cin>>x>>y>>z;

    if(x+y >= 10 || y+z >= 10 || x+z >= 10)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}


int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
        Critics();
    }

    return 0;
}
