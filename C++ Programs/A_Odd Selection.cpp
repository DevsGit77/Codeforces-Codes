#include <bits/stdc++.h>
#define ll long long
#define vin(v) for(auto &i: v) cin>>i;
#define vout(v) for(auto i: v) cout<<i<<" "; cout<<endl;
#define fl(i, a,n) for (int i=a; i<n; i++)
#define maze(n) for (int i=0; i<n; i++)
#define all(v) (v).begin(), (v).end()
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
#define py cout<<"Yes"<<endl
#define pn cout<<"No"<<endl
#define acm(v, x) accumulate(v.begin(), v.end(), x)
#define cnt(v, x) count(v.begin(), v.end(), x)
#define sm [](int x, int y) {return x+y;}
#define lcm(a, b)  a*b/__gcd(a, b)
#define bit_1count(a) __builtin_popcountll(a)
#define bit_cnt(num) log2(num)+1
#define clr_LSB(n, i) ( n & ~((1<<(i+1))-1) )
#define clr_MSB(n, i) (  n & ((1<<(i+1))-1) )
#define lastsbi(x) __lg(x)
#define ffsbi(x) __builtin_ffs(x)
#define pi 3.14159265358979323846264338327950
#define nroot(x, n) pow(x, 1.0/n)

using lld = long double;
using namespace std;




void Dev_Sol1()
{
    int n, x;
    cin >> n >> x;

    vector<int> v(n);

    int oc = 0, ec =0;

    for(auto &i: v){
        cin >> i;
        if(i&1) oc++;
        else ec++;
    }

    bool b = false;
    int i = 1;

    while( i<=oc && i<=x){
        int cur = ec;
        int rem = x-i;

        if(rem<=ec) b = true;

        i += 2;
    }

    if(b) py;
    else pn;

}



int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--){
        Dev_Sol1();
    }

    return 0;
}
