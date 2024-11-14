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
#define lcm(a, b)  a*b/__gcd(a, b)
#define bit_count(a) __builtin_popcount(a)
#define clr_LSB(n, i) ( n & ~((1<<(i+1))-1) )
#define clr_MSB(n, i) (  n & ((1<<(i+1))-1) )

using lld = long double;
using namespace std;


void Dev_Sol()
{
    int n, a, b;
    cin>>n>>a>>b;

    vector<int>v(n+1), ps(n+1);

    for(int i=1; i<=n; i++){
        cin>>v[i];
    }

    sort(all(v));

    ps[1] = v[1];

    for(int i=1; i<=n; i++){
        ps[i] = ps[i-1] + v[i];
    }

    int res = INT_MIN;

    for(int i=n; n-i<=a; i--){
        res = max(res, 2*ps[i - min(i,b)] - ps[i]);
    }
    cout<<res<<endl;
}


int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--){
        Dev_Sol();
    }

    return 0;
}
