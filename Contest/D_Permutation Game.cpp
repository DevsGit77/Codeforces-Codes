#include <bits/stdc++.h>
#define ll long long
#define fr(i,a,n) for (int i=a; i<n; i++)
#define maze(n) for (int i=0; i<n; i++)
#define all(v) (v).begin(), (v).end()
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using lld = long double;
using namespace std;




void Dev_Sol()
{
    ll n, k, pb, ps;
    cin>>n>>k>>pb>>ps;


    vector<ll>p(n+10), a(n+10);


    for(int i=1; i<=n; i++) cin>>p[i];
    for(int i=1; i<=n; i++) cin>>a[i];


    ll cb=0, cs=0, mx=0, pre = pb;


    for(ll i=1; i<= min(n, k); i++)
    {
        cb += a[pre];
        mx = max(mx, cb+(k-i)*a[pre]);
        pre = p[pre];
    }
    cb = mx;


    mx=0;
    pre = ps;

    for(ll i=1; i<= min(n, k); i++)
    {
        cs += a[pre];
        mx = max(mx, cs+(k-i)*a[pre]);
        pre = p[pre];
    }

    cs = mx;


    if(cb>cs) cout<<"Bodya"<<endl;
    else if(cs>cb) cout<<"Sasha"<<endl;
    else cout<<"Draw"<<endl;
}




int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
        Dev_Sol();
    }

    return 0;
}

