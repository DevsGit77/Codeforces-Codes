#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, ans = 0, mini = 0;
    cin>>n;
    vector<ll> v(n);

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    for(int i=0; i<n; i++)
    {
        if(v[i]>mini)
        {
            ans += v[i]-mini;
            mini = v[i];
        }
        else
        {
            mini = v[i];
        }
    }

    cout<<ans-1<<endl;

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }


    return 0;
}
