#include <bits/stdc++.h>
#define ll long long
using namespace std;

void RG_Solve()
{
    ll n, sum=0;
    cin>>n;

    vector<ll>line(n);
    for(int i=0; i<n; i++)
    {
        cin>>line[i];
    }

    map<ll, ll>gls;

    gls[0] = 1;

    for(int i=0; i<n; i++)
    {
        line[i] *= (i%2) ? -1 : 1;

        sum += line[i];

        if(gls[sum])
        {
            cout<<"YES"<<endl;
            return;
        }

        gls[sum]++;

    }

    cout<<"NO"<<endl;

}


int main()
{
    int t;
    cin>>t;
    while(t--) RG_Solve();

    return 0;
}
