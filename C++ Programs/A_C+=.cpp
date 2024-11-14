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
    int a, b, n;
    cin>>a>>b>>n;


    int mx, mn;

    int cnt=0;

    while(1){
        mx = max(a, b);
        mn = min(a, b);

        if(mx>n){
            break;
        }
        mn += mx;
        a = mn;
        b = mx;
        cnt++;

    }
    cout<<cnt<<endl;
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
