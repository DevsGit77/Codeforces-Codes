#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;

void Coins()
{
    ll n;
    cin>>n;

    ll a=n/3, b=n-a;

    if(b%2 != 0)
    {
       a+=1;
       b/=2;
    }
    else
        b/=2;

    cout<<a<<" "<<b<<endl;
}


int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
        Coins();
    }


    return 0;
}
