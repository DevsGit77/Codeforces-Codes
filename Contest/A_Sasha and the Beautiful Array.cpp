#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;

void Beautiful_Array()
{
    ll n, sm = 0;
    cin>>n;

    vector<ll>v(n);

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(), v.end());

    for(int i=1; i<n; i++)
    {
        sm += (v[i] - v[i-1]);
    }

    cout<<sm<<endl;
}


int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
        Beautiful_Array();
    }

    return 0;
}
