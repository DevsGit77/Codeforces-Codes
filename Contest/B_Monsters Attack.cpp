#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;

void Attack()
{
    ll n, k;
    cin>>n>>k;

    vector<int>hlt(n), p(n);

    for(int i=0; i<n; i++) cin>>hlt[i];
    for(int i=0; i<n; i++) cin>>p[i];

    vector<pair<ll, ll>> v(n);

    vector<ll>v(n+1);

    for(int i=0; i<n; i++)
    {
        v.push_back({abs(p[i]), hlt[i]});
    }

    sort(v.begin(), v.end());

    ll sm = 0;
    bool b = true;

    for (int i=1; i<v.size(); i++)
    {
        sm += v[i].second;
        ll pos = v[i].first;

        ll h = sm / k;


        if (sm % k != 0)
            h++;
        if (h > pos)
        {
            b = false;
            break;
        }
    }
    if (b)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;



}


int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
        Attack();
    }

    return 0;
}
