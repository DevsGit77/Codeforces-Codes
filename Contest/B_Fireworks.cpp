#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;

void Fireworks()
{
    ll x, y, tm;
    cin>>x>>y>>tm;

    ll ans = tm/x + tm/y;

    cout<<ans+2<<endl;

//    ll ans = ceil((long double)1.0*(tm+1) /x) + ceil((long double)(tm+1)*1.0 /y);
//    cout<<ans<<endl;

}


int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
        Fireworks();
    }

    return 0;
}

