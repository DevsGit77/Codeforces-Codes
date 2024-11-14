#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int x, y, z;
    cin>>x>>y>>z;

    if(x==y)
        cout<<z<<endl;
    else if(y==z)
        cout<<x<<endl;
    else
        cout<<y<<endl;

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

