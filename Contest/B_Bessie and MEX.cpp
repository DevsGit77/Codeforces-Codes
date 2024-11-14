#include <bits/stdc++.h>
#define ll long long
#define fr(i,a,n) for (int i=a; i<n; i++)
#define maze(n) for (int i=0; i<n; i++)
#define all(v) (v).begin(), (v).end()
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using lld = long double;
using namespace std;


void Joy_Sol()
{
    ll n;
    cin>>n;

    vector<ll>ara(n), ans(n);

    fr(i, 0, n) cin>>ara[i];

    ll cm = n;

    for(int i=n-1; i>=0; i--)
    {
        if(ara[i] > 0)
        {
            ans[i] = (cm - ara[i]);
            cm = ans[i];
        }
        else
        {
            ans[i] = (cm + abs(ara[i]));
        }
    }

    fr(i, 0, n)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}


int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
        Joy_Sol();
    }

    return 0;
}
