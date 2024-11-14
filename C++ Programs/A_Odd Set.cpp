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
    int n, oc=0, ec=0;
    cin>>n;

    vector<int>v(2*n);

    for(int i=0; i<2*n; i++)
    {
        cin>>v[i];
        if(v[i]%2 ==0)
            ec++;
        else
            oc++;
    }

    if(oc==ec) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
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
