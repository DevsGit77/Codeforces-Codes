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

    map<string, string>mp;

    while(m--)
    {
        string f, s;
        cin>>f>>s;

        if(f.length() <= s.length())
            mp[f]=f;
        else
            mp[f]=s;
    }

    while(n--)
    {
        string st;
        cin>>st;

        cout<<mp[st]<<" ";
    }
}


int main()
{
    speed;

    Dev_Sol();

    return 0;
}
