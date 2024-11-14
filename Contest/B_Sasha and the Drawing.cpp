#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;

void Drawing()
{
    ll gs, d;
    cin>>gs>>d;

    ll td = 4*gs - 2;

    if(d == td)
        cout<< (d/2)+1 <<endl;

    else if(d%2 == 0)
        cout<< (d/2) <<endl;

    else
        cout<< (d/2)+1 <<endl;


}


int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
        Drawing();
    }

    return 0;
}
