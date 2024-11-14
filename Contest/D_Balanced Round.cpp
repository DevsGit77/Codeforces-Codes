#include <bits/stdc++.h>
#define ll long long
#define fl(i, a,n) for (int i=a; i<n; i++)
#define maze(n) for (int i=0; i<n; i++)
#define all(v) (v).begin(), (v).end()
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
#define py cout<<"YES"<<endl
#define pn cout<<"NO"<<endl
#define acm(v, x) accumulate(v.begin(), v.end(), x)
#define cnt(v, x) count(v.begin(), v.end(), x)
#define sm [](int x, int y) {return x+y;}
#define lcm(a, b)  a*b/__gcd(a, b)
#define bit_1count(a) __builtin_popcountll(a)
#define bit_cnt(num) log2(num)+1
#define clr_LSB(n, i) ( n & ~((1<<(i+1))-1) )
#define clr_MSB(n, i) (  n & ((1<<(i+1))-1) )

using lld = long double;
using namespace std;


void Dev_Sol()
{
    int n, k;
    cin>>n>>k;

    vector<int>v(n);

    maze(n) cin>>v[i];

    sort(all(v));

    int b=0, r=0;

    for(int i=0; i<n-1; i++){
        if(v[i+1]-v[i]<=k) b++;
        else b=0;
        r = max(r, b);
    }
    cout<<n-(r+1)<<endl;

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
