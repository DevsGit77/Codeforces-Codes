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
    ll n, m;
    cin>>n;

    vector<ll> v1(n), v2(n);

    maze(n) cin>>v1[i];
    maze(n) cin>>v2[i];

    cin>>m;

    vector<ll>d(m);

    maze(m) cin>>d[i];


    multiset<ll>ms;
    set<ll>s;
    bool ist = false;

    maze(n)
    {
        if(v1[i]!=v2[i]){
            ms.insert(v2[i]);
        }
        s.insert(v2[i]);
    }


    for(auto e : d)
    {
        if(ms.find(e)!=ms.end())
        {
            ms.erase(ms.find(e));
            continue;
        }
        if(s.find(e)!=s.end())
        {
            if(ist)
                ist = false;

            continue;
        }

        if(ms.empty())
            ist=true;
    }

    if(ms.empty() && ist == false)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
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
