#include <bits/stdc++.h>
#define ll long long
using namespace std;


void solve()
{
    int n, k;
    cin>>n>>k;

    vector<ll>v(n);

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    if(k==1)
    {
        bool sorted = is_sorted(v.begin(), v.end());

        cout<<(sorted ? "YES" : "NO")<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
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
