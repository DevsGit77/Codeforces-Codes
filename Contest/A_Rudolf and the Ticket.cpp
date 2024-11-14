#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;

void Rudolf()
{
    int p, q, r;

    cin>>p>>q>>r;

    vector<int>lc(p), rc(q);
    int cnt=0;

    for(int i=0; i<p; i++) cin>>lc[i];
    for(int i=0; i<q; i++) cin>>rc[i];

    for(int i=0; i<p; i++)
    {
        for(int j=0; j<q; j++)
        {
            if(lc[i] + rc[j] <= r)
                cnt++;
        }
    }

    cout<<cnt<<endl;
}


int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
        Rudolf();
    }

    return 0;
}
