#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;


ll dvp(int bs, int p)
{
    ll val = 1;

    for(int i=0; i<p; i++)
    {
        val *= bs;
    }
    return val;
}


void Finger()
{
    ll a, b, l;
    cin>>a>>b>>l;

    ll cnt=0;

    map<int, int>mp;

    for(int i=0; i<30; i++)
    {
        ll poa = dvp(a, i);

        if (poa > l) break;

        for(int j=0; j<30; j++)
        {
            ll pob = dvp(b, j);

            if (pob > l) break;


            ll res = poa * pob;

            if (res > l) break;

            if (l%res == 0)
            {
                mp[l/res]++;
            }
        }
    }

    cout<<mp.size()<<endl;
}



int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
        Finger();
    }

    return 0;
}
