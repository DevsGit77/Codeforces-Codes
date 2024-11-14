#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using lld = long double;
using namespace std;
const ll mod = 1e9 + 7;

ll maxSubArraySum(vector<ll>v, ll sz)
{
    ll max_so_far = LLONG_MIN, max_ending_here = 0;

    for (int i = 0; i < sz; i++) {
        max_ending_here = max_ending_here + v[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;

        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}


void MSum()
{
    ll n, k;
    cin>>n>>k;

    vector<ll>ara(n);

    ll sum=0, res;

    for(int i=0; i<n; i++)
    {
        cin>>ara[i];
        sum += ara[i];
    }

    res = sum;

    ll ms = maxSubArraySum(ara, n);

    if(ms<0)
        ms = 0;

    while(k--)
    {
        res = (((res + ms) % mod) + mod) % mod;

        ms = (ms*2) % mod;
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
        MSum();
    }

    return 0;
}

