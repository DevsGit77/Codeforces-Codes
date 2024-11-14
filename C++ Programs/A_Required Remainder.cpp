#include <bits/stdc++.h>
#define ll long long
using namespace std;


void solve()
{
    ll x, y, n, div, rem;
    cin>>x>>y>>n;

    div = n/x;
    rem = div*x + y;

    if(rem>n)
    {
        rem = (div-1)*x + y;
    }

    cout<<rem<<endl;


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

