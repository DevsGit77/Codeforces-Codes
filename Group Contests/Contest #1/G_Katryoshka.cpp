#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
    ll e,m,b,r,mn;
    cin>>e>>m>>b;
    mn = min({e,m,b});
    r = mn;

    e -= mn;
    m -= mn;
    b -= mn;
    mn = min(e/2, b);

    r += mn;
    cout<<r<<endl;



    return 0;
}
