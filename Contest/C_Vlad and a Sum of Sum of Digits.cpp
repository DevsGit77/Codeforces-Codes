#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;
const int rng = 2e5 + 10;

ll vs[rng];

ll sumD(ll n)
{
    ll sm = 0;

    while(n != 0)
    {
        sm += n % 10;
        n /= 10;
    }

    return sm;
}

void pres()
{
    for(int i=1; i<=rng; i++)
    {
        vs[i] = vs[i-1] + sumD(i);
    }
}


void Digits()
{
    ll n;
    cin>>n;

    cout<<vs[n]<<endl;
}


int main()
{
    speed;

    pres();

    int tc;
    cin>>tc;

    while(tc--)
    {
        Digits();
    }

    return 0;
}
