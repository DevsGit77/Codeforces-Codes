#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll dp1[100002] = {0};
ll dp2[100002];


void solveBoredom()
{
    ll n, e;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>e;
        dp1[e]++;
    }

    dp2[0] = 0;
    dp2[1] = dp1[1];

    for(int i=2; i<=100000; i++)
    {
        dp2[i] = max(dp2[i-1], dp2[i-2]+i*dp1[i]);
    }

    cout<<dp2[100000];
}


int main()
{

    solveBoredom();

    return 0;
}
