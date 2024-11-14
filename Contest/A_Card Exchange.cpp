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
    int nc, ec;
    cin>>nc>>ec;

    vector<int>v(nc);

    map<int,int>mp;

    bool ist = false;

    maze(nc)
    {
        cin>>v[i];
        mp[v[i]]++;
    }
    for(auto it : mp)
    {
        if(it.second >= ec)
        ist = true;
    }
    if(ist)
        cout<<ec-1<<endl;
    else
        cout<<nc<<endl;
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

