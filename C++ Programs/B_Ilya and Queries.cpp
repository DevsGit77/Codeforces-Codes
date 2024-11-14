#include <bits/stdc++.h>
#define ll long long
#define fr(i,a,n) for (int i=a; i<n; i++)
#define maze(n) for (int i=0; i<n; i++)
#define all(v) (v).begin(), (v).end()
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using lld = long double;
using namespace std;


void Joy_Sol()
{
    string s;
    cin>>s;
    int n = s.size();
    vector<int>v(n+1, 0), ans(n+1, 0);

    int t;
    cin>>t;

    v[0]=1;

    for(int i=1; i<=n-1; i++)
    {
        if(s[i]==s[i-1]) v[i]++;
    }

    for(int i=1; i<=n; i++)
    {
        v[i] += v[i-1];
    }

    while(t--)
    {
        int a, b;
        cin>>a>>b;
        cout<<v[b-1] - v[a-1]<<endl;
    }
}

int main()
{
    speed;

//    int tc;
//    cin>>tc;
//
//    while(tc--)
//    {
        Joy_Sol();
//    }

    return 0;
}
