#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ll n,l,t=0;
    double m,s,p,ans;

    cin>>n>>l;
    int a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a, a+n);

    for(int i=0; i<n; i++)
    {
        if((a[i+1]- a[i]) > t)
        {
            t = a[i+1]-a[i];
        }
    }
    m = a[0];
    s = (double)t/2;
    ans = max(m,s);
    p = l - a[n-1];
    ans = max(p,ans);

    cout<<fixed<<setprecision(10)<<ans<<endl;

    return 0;
}
