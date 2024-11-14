#include <bits/stdc++.h>
#define ll long long
#define fr(i,a,n) for (int i=a; i<n; i++)
#define maze(n) for (int i=0; i<n; i++)
#define all(v) (v).begin(), (v).end()
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
#define py cout<<"YES"<<endl
#define pn cout<<"NO"<<endl
using lld = long double;
using namespace std;

ll lcm(ll x, ll y){
    ll rem = (x*y)/__gcd(x, y);
    return rem;
}

void Dev_Sol()
{
    ll l, r;
    cin>>l>>r;

    if(2*l>r)
        cout<<-1<<" "<<-1<<endl;
    else
        cout<<l<<" "<<2*l<<endl;
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

