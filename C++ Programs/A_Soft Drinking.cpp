#include <bits/stdc++.h>
#define ll long long
using namespace std;




int main()
{
    int n,k,l,c,d,p,nl,np, tl, tc, tp, ans;

    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    tl = (k*l)/nl;
    tc = c*d;
    tp = p/np;

    ans = min(tl, min(tc, tp))/n;

    cout<<ans<<endl;



    return 0;
}
