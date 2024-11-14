#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;

void Make_Equal()
{
    ll nc;
    cin >> nc;

    vector<ll> v(nc);

    ll tuw = 0, av, am = 0;

    for(int i = 0; i < nc; i++)
    {
        cin >> v[i];
        tuw += v[i];
    }

    av = tuw / nc;

    int iseql = 1;

    for(int i = 0; i < nc; i++)
    {
        if(v[i] > av)
        {
            am += v[i] - av;
        }
        else if(v[i] < av)
        {
            if(am >= av - v[i])
            {
                am -= (av - v[i]);
            }
            else
            {
                iseql = 0;
                break;
            }
        }
    }

    if(iseql)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

}


int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
        Make_Equal();
    }

    return 0;
}
