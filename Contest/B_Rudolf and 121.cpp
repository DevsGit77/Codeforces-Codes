#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;


void Rudolf_B()
{
    ll n;
    cin>>n;

    vector<ll>ara(n);

    bool ist=false;

    for(int i=0; i<n; i++) cin>>ara[i];

    for(int i=1; i<n-1; i++)
    {
        if(ara[i - 1] <= ara[i + 1] && ara[i] >= 2 * ara[i - 1])
        {
            ara[i + 1] -= ara[i - 1];
            ara[i] -= 2 * ara[i - 1];
            ara[i - 1] = 0;
        }
    }



    for(int i=0; i<n; i++)
    {
        if(ara[i] != 0)
        {
            ist = true;
            break;
        }
    }

    if(ist)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
}

int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
        Rudolf_B();
    }

    return 0;
}
