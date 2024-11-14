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

using lld = long double;
using namespace std;


// Problem: A. Max Plus Size

void Dev_Sol1() {
    int n;
    cin >> n;

    int szb = 0, sze = 0, mxb = -1, mxe = -1;

    for(int i=0; i<n; i++){
        int ele;
        cin >> ele;

        if(i%2==0){
            szb++;
            mxb = max(ele, mxb);
        }
        else{
            sze++;
            mxe = max(ele, mxe);
        }
    }

    int res = max(sze+mxe, szb+mxb);

    cout << res << endl;
}


// Problem: B. All Pairs Segments

void Dev_Sol2(){
    ll n, q;
    cin >> n >> q;

    vector<ll> v(n);
    vin(v);

    map<ll, ll> mp_seg;

    for(ll i=0; i<n-1; i++){
        ll total_seg = i*(n-i) + (n-i-1);
        mp_seg[total_seg]++;

        ll rem_points = v[i+1]-v[i]-1;
        ll rem_points_seg = i*(n-i-1) + (n-i-1);
        mp_seg[rem_points_seg] += rem_points;
    }
    mp_seg[n-1]++;

    while(q--){
        ll k;
        cin >> k;

        cout << mp_seg[k] <<" ";
    }cout<<endl;
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
