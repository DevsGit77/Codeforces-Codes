#include <bits/stdc++.h>
#define ll long long
#define fl(a,n) for (int i=a; i<n; i++)
#define maze(n) for (int i=0; i<n; i++)
#define all(v) (v).begin(), (v).end()
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
#define py cout<<"YES"<<endl
#define pn cout<<"NO"<<endl
using lld = long double;
using namespace std;


void Dev_Sol()
{
    ll x, y, z, k, rem, res=0, w=0;
    cin>>x>>y>>z>>k;

    for(ll i=1; i<=x; i++){
        for(ll j=1; j<=y; j++){
            if(k%(i*j)) continue;

            rem = k/(i*j);

            if(rem>z) continue;
            w = (x-i+1)*(y-j+1)*(z-rem+1);
            res = max(res, w);
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
        Dev_Sol();
    }

    return 0;
}

