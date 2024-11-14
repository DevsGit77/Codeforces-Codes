#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll sum1=0,sum2=0,l,r,mx,mn;

        cin>>l>>r;
        mx = max(l,r);
        mn = min(l,r);
        mn = mn-1;

        sum1 = mx*(mx+1)/2;
        sum2 = mn*(mn+1)/2;

        cout<<sum1-sum2<<endl;
    }

    return 0;
}
