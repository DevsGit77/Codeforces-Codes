#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;
const int N = 10e5;

vector<int> g[N];

int vis[50002][502];

int ans=0, n, k;


void dfs(int v, int pos)
{
    vis[v][0] = 1;

    for(int i : g[v])
    {

        if(i == pos) continue;

        dfs(i, v);

        for(int j=1; j<=k; j++)
        {
            ans += vis[v][j-1] * vis[i][k-j];
        }


        for(int j=1; j<=k; j++)
        {
            vis[v][j] += vis[i][j-1];
        }
    }
}


void Distance()
{
    cin>>n>>k;

    for(int i=0; i<n-1; i++)
    {
        int v1, v2;
        cin>>v1>>v2;

        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }

    dfs(1, 0);

    cout<<ans<<endl;
}



int main()
{
    speed;

//    int tc;
//    cin>>tc;
//
//    while(tc--)
//    {
//
//    }

    Distance();

    return 0;
}
