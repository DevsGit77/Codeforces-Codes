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

const int N=1e5+10;

vector<ll>prefix_sum(N), ps(N);


int main()
{
    speed;

    int n;
    cin>>n;

    vector<ll>v(n+1);

    for(int i=1; i<=n; i++){
        cin>>v[i];

        prefix_sum[i] = prefix_sum[i-1] + v[i];
    }

    sort(all(v));

    for(int i=1; i<=n; i++){
        ps[i] = ps[i-1]+v[i];
    }


    int q;
    cin>>q;

    while(q--){
        int t, l, r;
        cin>>t>>l>>r;

        if(t==1){
            cout<<prefix_sum[r]-prefix_sum[l-1]<<endl;
        }
        else{
            cout<<ps[r]-ps[l-1]<<endl;
        }
    }

    return 0;
}
