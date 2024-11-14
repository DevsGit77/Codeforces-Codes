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

    int mx=0, r=0;

    for(int i=1; i<=n; i++)
    {
        int a, b;
        cin>>a>>b;

        if (a <= 10 && b>mx)
        {
            r = i;
            mx = b;
        }
    }

    cout<<r<<endl;
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

