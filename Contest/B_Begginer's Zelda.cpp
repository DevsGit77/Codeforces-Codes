/// not Uploaded / not Submitted

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n, cnt = 0, ans = 0;
    cin>>n;


    vector<vector<int>>v(n+1);

    for(int i = 1; i<n; i++)
    {
        int x, y;
        cin>>x>>y;

        v[x].push_back(x);
        v[y].push_back(y);
    }

    for(int i=1; i<n; i++)
    {
        if(v[i].size() == 1)
            cnt++;
    }


    cout<<(cnt+1)/2 + (cnt+1)%2<<endl;
}


int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }

    return 0;
}
