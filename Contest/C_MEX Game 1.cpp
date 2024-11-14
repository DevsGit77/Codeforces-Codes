#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;

void Mex_Game()
{
    ll n;
    cin>>n;

    vector<ll>ara(n), gs(n+1);

    for(int i=0; i<n; i++)
    {
        cin>>ara[i];
        gs[ara[i]]++;
    }

    ll res = 0;
    bool f=true;

    for(int i=0; i<=n; i++)
    {
        if(gs[i]==0)
        {
            res = i;
            break;
        }
        else if(gs[i]==1)
        {
            if(f)
                f=false;
            else
            {
                res = i;
                break;
            }
        }
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
        Mex_Game();
    }

    return 0;
}
