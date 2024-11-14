#include <bits/stdc++.h>
#define ll long long
using namespace std;

void Difference()
{
    ll n, m, sum = 0;
    cin>>n>>m;

    ll a[n], b[m];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    sort(a, a+n);

    for(int i=0; i<m; i++)
    {
        cin>>b[i];
    }

    sort(b, b+m);
    reverse(b, b+m);

    ll d = m-n;

    for(int i=0; i<n; i++)
    {
        sum += max(abs(a[i]-b[i]), abs(a[i] - b[d+i]));
    }

    cout<<sum<<endl;


}


int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        Difference();
    }

    return 0;
}
