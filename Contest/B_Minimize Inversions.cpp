#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;






//void Inversion()
//{
//    ll n;
//    cin>>n;
//
//    vector<ll>f(n), s(n);
//
//
//    for(int i=0; i<n; i++)
//        cin>>f[i];
//
//    map<ll,ll>mp;
//
//    for(int i=0; i<n; i++)
//        cin>>s[i];
//
//    for(int i=0;i<n;i++)
//    {
//        mp[f[i]] = s[i];
//    }
//
//    sort(f.begin(), f.end());
//
//    vector<ll>v;
//
//    for(auto ele: f)
//    {
//        v.push_back(mp[ele]);
//    }
//
//    for(auto ele: f)
//    {
//        cout<<ele<<" ";
//    }
//    cout<<endl;
//
//    for(auto ele: v)
//    {
//        cout<<ele<<" ";
//    }
//    cout<<endl;
//
//}

/// Alternative Solution

void Inversion()
{
    ll n;
    cin>>n;

    vector<pair<ll, ll>> vp(n);

    for(int i=0; i<n; i++)
    {
        cin>>vp[i].first;
    }
    for(int i=0; i<n; i++)
    {
        cin>>vp[i].second;
    }

    sort(vp.begin(), vp.end());

    for(int i=0; i<n; i++)
    {
        cout<<vp[i].first<<" ";
    }
    cout<<endl;

    for(int i=0; i<n; i++)
    {
        cout<<vp[i].second<<" ";
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
        Inversion();
    }

    return 0;
}

