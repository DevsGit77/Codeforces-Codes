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
    ll n, res=1e10;
    cin>>n;

    vector<ll>v(n);
    maze(n) cin>>v[i];

    for(int i=0; i<n-1; i++)
    {
        res = min(res, max(v[i], v[i+1])-1);
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
        Dev_Sol();
    }

    return 0;
}
