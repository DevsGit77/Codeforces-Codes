#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;

void Subset()
{
    int n;
    cin>>n;

    vector<ll>v(n);

    ll mx = 0, mn = 1e9;


    for(int i=0; i<n; i++)
    {
        cin>>v[i];

        mx = max(mx, v[i]);
        mn = min(mn, v[i]);
    }

    cout<<mx-mn<<endl;

}


int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
        Subset();
    }

    return 0;
}
