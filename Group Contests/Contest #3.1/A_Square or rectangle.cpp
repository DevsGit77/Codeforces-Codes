#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll w, h;
    cin>>w>>h;

    if(w==h)
        cout<<"Square"<<endl;
    else
        cout<<"Rectangle"<<endl;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
        solve();



    return 0;
}
