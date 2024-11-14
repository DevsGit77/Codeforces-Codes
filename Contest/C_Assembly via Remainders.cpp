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
    ll n;
    cin>>n;

    vector<ll> v(n);

    ll mx=0;

    for(int i=0; i<n-1; i++)
    {
        cin>>v[i];

        mx = max(mx, v[i]);
    }

    mx++;

    cout<<mx<<" ";

    for(int i=0; i<n-1; i++)
    {
        cout<<mx+v[i]<<" ";
        mx += v[i];
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
        Dev_Sol();
    }

    return 0;
}

