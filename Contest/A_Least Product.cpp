#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n, cm =0, zc = 0;
    cin>>n;

    vector<ll>v(n);

    for(int i=0; i<n; i++)
    {
        cin>>v[i];

        if(v[i] < 0)
            cm++;
    }

    zc = count(v.begin(), v.end(), 0);

    if(zc != 0)
    {
        cout<<0<<endl;
        return;
    }

    if(cm == 0)
    {
        cout<<1<<endl;
        cout<<1<<" "<<0<<endl;
        return;
    }


    if(cm & 1)
    {
        cout<<0<<endl;
        return;
    }
    else
    {
        cout<<1<<endl;

        for(int i=0; i<n; i++)
        {
            if(v[i]<0)
            {
                cout<<i+1<<" "<<0<<endl;
                return;
            }
        }
    }
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
