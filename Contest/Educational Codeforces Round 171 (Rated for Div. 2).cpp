#include <bits/stdc++.h>
#define ll long long
#define vin(v) for(auto &i: v) cin>>i;
#define vout(v) for(auto i: v) cout<<i<<" "; cout<<endl;
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
#define lastsbi(x) __lg(x)
#define ffsbi(x) __builtin_ffs(x)
#define pi 3.14159265358979323846264338327950
#define nroot(x, n) pow(x, 1.0/n)
#define pii pair<int, int>

using lld = long double;
using namespace std;


// Problem:: A. Perpendicular Segments

void Dev_Sol1() {
    int x, y, k;
    cin >> x >> y >> k;

    int r = min(x, y);

    cout << 0 << " " << 0 << " " << r << " " << r <<endl;
    cout << 0 << " " << r << " " << r << " " << 0 <<endl;
}


// Problem: B. Black Cells

bool canPB(vector<ll> &v, ll mid){
    int sz = v.size();
    bool b = true;

    if(sz&1){

    }
}

void Dev_Sol2(){
    ll n;
    cin >> n;
    vector<ll> ara(n);
    vin(ara);
    sort(all(ara));

    ll lo = 1, hi = 1e18, mid, res = 0;

    while(lo<=hi){
        mid = (lo+hi)/2;

        if(canPB(ara, mid)){
            res = mid;
            hi = mid-1;
        }
        else lo = mid+1;
    }

    cout << res <<endl;
}


int main() {
    speed;

    int tc;
    cin>>tc;
    while(tc--) {
//        Dev_Sol1();
        Dev_Sol2();
    }

    return 0;
}
