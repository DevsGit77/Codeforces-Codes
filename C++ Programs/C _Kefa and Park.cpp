#include <bits/stdc++.h>
#define ll long long
#define fr(i,a,n) for (int i=a; i<n; i++)
#define maze(n) for (int i=0; i<n; i++)
#define all(v) (v).begin(), (v).end()
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using lld = long double;
const int N = 1e5+10;
using namespace std;

vector<int> g[N];
bool cat[N];

int res=0, n, m;


void dfs(int vertex, int parent, int nc, int mxc)
{
    if(cat[vertex]) nc++;
    else nc = 0;

    mxc = max(mxc, nc);

    int childNum=0;

    for(auto child : g[vertex])
    {
        if(child != parent)
        {
            dfs(child, vertex, nc, mxc);
            childNum++;
        }
    }

    if(childNum == 0 && mxc <= m) res++;
}


void Dev_Sol()
{
    cin>>n>>m;

    for(int i=1; i<=n; i++) cin>>cat[i];

    for(int i=1; i<n; i++)
    {
        int v1, v2;
        cin>>v1>>v2;

        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }

    dfs(1, 0, 0, 0);

    cout<<res<<endl;
}


int main()
{
    speed;

    Dev_Sol();

    return 0;
}
