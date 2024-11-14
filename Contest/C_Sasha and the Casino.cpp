#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;

void Casino()
{
    ll bi, mxl, nc;
    cin>>bi>>mxl>>nc;

    if(nc <= mxl)
    {
        cout<<"NO"<<endl;
        return;
    }


    ll losl = 1;

    nc = nc-1;

    for(int i=1; i<=mxl; i++)
    {
        int ls = ceil(1.0*(losl+1)/(bi-1));

        nc -= ls;

        if(nc < 0)
        {
            cout<<"NO"<<endl;
            return;
        }

        losl += ls;
    }

    cout<<"YES"<<endl;
}


int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
        Casino();
    }

    return 0;
}
