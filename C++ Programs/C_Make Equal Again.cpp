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

    maze(n) cin>>v[i];

    int l=0, r=0, ans=n;


    while(l<n && v[0]==v[l]) l++;
    while(r<n && v[n-1]==v[n-r-1]) r++;

    if(v[0] == v[n-1])
    {
        ans -= l;
        ans -= r;
    }
    else
    {
        ans -= max(l, r);
    }

    cout<<max(0, ans)<<endl;
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

