#include <bits/stdc++.h>
using namespace std;

typedef long long ll;



void solve(int t)
{
    while(t--)
    {
        ll a,b,n;
        cin>>a>>b>>n;

        vector<ll>vr(n);


        for(ll i=0; i<n; i++)
        {
            cin>>vr[i];
        }

        ll ans = b;
        for(auto &i : vr)
        {
            ans += min(a-1,i);
        }

        cout<<ans<<endl;
    }
}

int main()
{
    int t;
    cin>>t;

    solve(t);

    return 0;
}
