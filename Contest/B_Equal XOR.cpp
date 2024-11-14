#include <bits/stdc++.h>
#define ll long long
using lld = long double;
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;


void Equal_XOR()
{
    ll n, k;
    cin>>n>>k;

    vector<ll>l(n+1), r(n+1);
    for(int i=1; i<=n; i++) cin>>l[i];
    for(int i=1; i<=n; i++) cin>>r[i];

    ll k1 = 2*k, k2 = 2*k;

    map<ll, ll>mp;
    vector<ll>res1, res2;

    for(int i=1; i<=n; i++)
    {
        mp[l[i]]++;
    }

    for(int i=1; i<=n; i++)
    {
        if(mp[i]==1 && k1>0)
        {
            res1.push_back(i);
            res2.push_back(i);
            k1--;
            k2--;
        }
    }

    if(res1.size()%2 != 0)
    {
        res1.pop_back();
        res2.pop_back();
        k1++;
        k2++;
    }

    for(int i=1; i<=n; i++)
    {
        if(mp[i]==2 && k1>0)
        {
            res1.push_back(i);
            res1.push_back(i);
            k1 -= 2;
        }
    }


    for(int i=1; i<=n; i++)
    {
        if(mp[i]==0 && k2>0)
        {
            res2.push_back(i);
            res2.push_back(i);
            k2 -= 2;
        }
    }

    for(int i=0; i<res1.size(); i++) cout<<res1[i]<<" ";
    cout<<endl;

    for(int i=0; i<res2.size(); i++) cout<<res2[i]<<" ";
    cout<<endl;


}



int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
        Equal_XOR();
    }

    return 0;
}
