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
    int n;
    cin>>n;

    vector<int>v(n), res;

    int rem=1;

    maze(n)
    {
        cin>>v[i];

        int r = __gcd(rem, v[i]);

        rem *= v[i]/r;
    }

    int sm=0;

    maze(n)
    {
        sm += rem/v[i];
        res.push_back(rem/v[i]);
    }


    if(sm>=rem)
    {
        cout<<-1<<endl;
        return;
    }

    maze(res.size())
    {
        cout<<res[i]<<" ";
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
