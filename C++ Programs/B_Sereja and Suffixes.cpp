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
    int n, m;
    cin>>n>>m;

    vector<int> ara(n), ans(n+2);
    set<int>s;

    int q=n-1;

    maze(n) cin>>ara[i];

    for(int i=n-1; i>=0; i--)
    {
        s.insert(ara[i]);

        ans[i]=s.size();
    }

    while(m--)
    {
        int e;
        cin>>e;

        cout<<ans[e-1]<<endl;
    }

}


int main()
{
    speed;

    Dev_Sol();

    return 0;
}

