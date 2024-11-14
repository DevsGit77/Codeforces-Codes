#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll a, b, xk, yk, xq, yq, ans = 0;

    cin>>a>>b>>xk>>yk>>xq>>yq;

    set<pair<int, int>>s1,s2;

    s1.insert({xk - a, yk - b});
    s1.insert({xk + a, yk - b});
    s1.insert({xk - a, yk + b});
    s1.insert({xk + a, yk + b});

    s1.insert({xk - b, yk - a});
    s1.insert({xk + b, yk - a});
    s1.insert({xk - b, yk + a});
    s1.insert({xk + b, yk + a});

    s2.insert({xq - a, yq - b});
    s2.insert({xq + a, yq - b});
    s2.insert({xq - a, yq + b});
    s2.insert({xq + a, yq + b});

    s2.insert({xq - b, yq - a});
    s2.insert({xq + b, yq - a});
    s2.insert({xq - b, yq + a});
    s2.insert({xq + b, yq + a});


    for(auto i: s1)
    {
        if(s2.find(i) != s2.end())
        {
            ans++;
        }
    }

    cout<<ans<<endl;

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
