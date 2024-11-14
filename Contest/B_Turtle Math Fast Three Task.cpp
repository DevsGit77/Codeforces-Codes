#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;

void Math()
{
    ll n, sum=0;
    cin>>n;

    vector<ll>ara(n);
    bool f = false;
    for(int i=0; i<n; i++)
    {
        cin>>ara[i];
        if(ara[i]%3 == 1)
        {
            f =true;
        }
        sum+=ara[i];
    }

    if(sum%3 == 0)
        cout<<0<<endl;
    else if(sum%3 == 2)
        cout<<1<<endl;
    else if(sum%3 == 1)
    {
        if(f)
            cout<<1<<endl;
        else
            cout<<2<<endl;
    }
}


int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
        Math();
    }

    return 0;
}
