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
    int n, c0=0, c1=0;
    cin>>n;

    vector<int>v(n);
    vector<int>::iterator it;

    maze(n)
    {
        cin>>v[i];
        if(v[i] == 0) c0++;
        else c1++;
    }
    if(c0>= n/2)
    {
        cout<<c0<<endl;
        maze(c0) cout<<0<<" ";
    }
    else
    {
        int x = c1-c1%2;

        cout<<x<<endl;
        maze(x) cout<<1<<" ";
    }
    cout<<endl;
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
