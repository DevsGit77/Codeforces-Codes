#include <bits/stdc++.h>
using namespace std;
#define ll long long



int main()
{
    ll n,k,d;

    cin>>n>>k;

    ll flg = 1, cnt=0;

    for(int i=1; i<=n; i++)
    {
        ll value;
        cin>>value;
        if(flg)
        {
            d = value;
            flg = 0;
        }
        else
        {
            if(value<d)
            {
                d = value;
            }
        }
        cnt++;

        if(cnt == k || i == n)
        {
            cout<<d<<" ";
            cnt = 0;
            flg = 1;
        }
    }

    return 0;
}
