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

    vector<ll>v(n);
    map<ll, ll>mp;

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        mp[v[i]]++;
    }

    sort(all(v));

    ll mx = v[n-1], mn= v[0];

    if(mx==mn)
        cout<<0<<" "<<(mp[mn]*(mp[mn]-1))/2<<endl;
    else
        cout<<mx-mn<<" "<<mp[mn]*mp[mx]<<endl;
}


int main()
{
    speed;

    Dev_Sol();

    return 0;
}

