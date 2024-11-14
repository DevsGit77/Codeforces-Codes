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
    int n, f, k;
    cin>>n>>f>>k;

    vector<int>v(n);
    maze(n) cin>>v[i];

    int rem = v[f-1];
    bool ist = false;

    sort(v.rbegin(), v.rend());

    for(int i=0; i!= k; i++)
    {
        if(v[i]==rem)
        {
            ist = true;
            break;
        }
    }

    if(ist)
    {
        ist = true;

        for(int i=k; i!=n; i++)
        {
            if(v[i]==rem)
            {
                ist=false;
                break;
            }
        }

        if(ist)
            cout<<"YES"<<endl;
        else
            cout<<"MAYBE"<<endl;
    }
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
