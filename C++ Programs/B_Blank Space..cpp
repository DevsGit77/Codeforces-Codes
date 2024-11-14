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
    int n, mxc=0, c=0;
    cin>>n;

    vector<int>v(n);

    maze(n)
    {
        cin>>v[i];
        if(v[i]==0) c++;
        else c=0;

        mxc = max(mxc, c);
    }
    cout<<mxc<<endl;
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

