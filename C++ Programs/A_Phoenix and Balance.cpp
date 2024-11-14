#include <bits/stdc++.h>
#define ll long long
#define fl(a,n) for (int i=a; i<n; i++)
#define maze(n) for (int i=0; i<n; i++)
#define all(v) (v).begin(), (v).end()
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
#define py cout<<"YES"<<endl
#define pn cout<<"NO"<<endl
#define acm(v, x) accumulate(v.begin(), v.end(), x)
#define cnt(v, x) count(v.begin(), v.end(), x)
#define sm [](int x, int y) {return x+y;}
using lld = long double;
using namespace std;


void Dev_Sol()
{
    int n;
    cin>>n;

    ll sum=(1<<n);

    for(int i=1; i<n/2; i++) sum += (1<<i);

    for(int i=n/2; i<n; i++) sum -= (1<<i);

    cout<<sum<<endl;
}




int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
        Dev_Sol();
    }

    return 0;
}