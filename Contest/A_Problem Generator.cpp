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
    int n, m, res=0;
    cin>>n>>m;

    string s;
    cin>>s;

    vector<char> ca = {'A', 'B', 'C', 'D', 'E', 'F', 'G'};
    map<char, int>mp;

    for(auto e: s)
        mp[e]++;

    for(auto e : ca)
        res += (m-mp[e])<0 ? 0 : abs(m-mp[e]);
    cout<<res<<endl;
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
