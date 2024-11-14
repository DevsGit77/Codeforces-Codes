#include <bits/stdc++.h>
#define ll long long
#define fr(i,a,n) for (int i=a; i<n; i++)
#define maze(n) for (int i=0; i<n; i++)
#define all(v) (v).begin(), (v).end()
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using lld = long double;
using namespace std;


auto sign(int value)
{
    if(value>0) return 1;
    else return -1;
}


void Dev_Sol()
{
    int n;
    cin>>n;

    vector<int>v(n);

    maze(n) cin>>v[i];


    ll mxsum =0, j;

    maze(n)
    {
        int pre = v[i];

        for(j=i; j<n && sign(v[i])==sign(v[j]) ; j++)
        {
            pre = max(pre, v[j]);
        }

        mxsum += pre;

        i = j-1;
    }

    cout<<mxsum<<endl;

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
