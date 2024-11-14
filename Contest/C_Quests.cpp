#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n, k;
    cin>>n>>k;

    vector<int>v1;

    vector<int>v2;

    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v1.push_back(x);
    }

    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v2.push_back(x);
    }

    int sm=0, mxi = 0, mxAns=0, tsum;

    for(int i = 0; i<n; i++)
    {
        if(i>=k)
            break;
        sm += v1[i];
        mxi = max(v2[i], mxi);

        tsum = sm + mxi*(k-i-1);

        mxAns = max(tsum, mxAns);
    }

    cout<<mxAns<<endl;
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
