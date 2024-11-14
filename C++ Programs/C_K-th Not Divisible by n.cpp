#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;

void Divisible()
{
    ll n, k, value ;
    cin>>n>>k;

    value = k + ((k-1) / (n-1));

    cout<< value <<endl;
}


int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
        Divisible();
    }

    return 0;
}
