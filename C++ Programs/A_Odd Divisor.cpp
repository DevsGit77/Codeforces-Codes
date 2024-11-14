#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(int k)
{
    while(k--)
    {
        ll n;
        cin>>n;

        while(n%2==0)
        {
            n = n/2;
        }

        if(n==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"Yes"<<endl;
        }
    }

}

signed main()
{
    ll t;
    cin>>t;
    solve(t);
}
