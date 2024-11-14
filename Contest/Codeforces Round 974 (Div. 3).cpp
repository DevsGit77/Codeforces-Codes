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


// Problem: A. Robin Helps

void Dev_Sol1()
{
    int n, k;
    cin >> n >> k;

    int rb = 0, zero=0;


    for(int i=1; i<=n; i++){
        int e;
        cin >> e;

        if(e >= k ) rb += e;
        else if(e==0 && rb>0) {
                zero++;
                rb--;
        }
    }

    cout << zero << endl;
}


// Problem: B. Robin Hood and the Major Oak

void Dev_Sol2()
{
    ll n, k;
    cin >> n >> k;

    ll init = max(1ll, n-k+1);

    if(init%2){
        ll od = (n-init)/2 + 1;
        if(od%2) pn;
        else py;
    }
    else{
        ll od = (n-init+1)/2;
        if(od%2) pn;
        else py;
    }

}


// Problem: C. Robin Hood in Town


bool iscan(ll n, vector<ll> & ara,  ll tot, ll add){
    vector<ll> v = ara;

    v[n-1] += add;

    ll ntot = tot+add;

    double hf_avg = ntot*(1.0)/(2*n);

    ll cnt=0;

    for(int i=0; i<n; i++){
        if(v[i]<hf_avg) cnt++;
    }

    return cnt > n/2;
}

void Dev_Sol3()
{
    ll n, tot=0;
    cin >> n;

    vector<ll> wealth(n);

    for(int i=0; i<n; i++){
        cin >> wealth[i];

        tot += wealth[i];
    }

    if(n==1 || n==2){
        cout << -1 << endl;
        return;
    }

    sort(all(wealth));


    ll lo = 0, hi = 1e18, mid, res = -1;

    while(lo<=hi){
        mid  = (hi+lo)/2;

        if(iscan(n, wealth, tot, mid)){
            res = mid;
            hi = mid-1;
        }
        else lo = mid+1;
    }

    cout << res << endl;
}



// Problem: D. Robert Hood and Mrs Hood


void Dev_Sol4()
{
    int n, d, k;
    cin >> n >> d >> k;

    vector<int> begins(n+10), ends(n+10);

    for(int i=0; i<k; i++){
        int b, e;
        cin >> b >> e;

        begins[b]++;
        ends[e]++;
    }

    int mx = INT_MIN, mn = INT_MAX, bro, mom;

    int init = 1, ovlp_ct=0;

    while(init <= n){
        ovlp_ct += begins[init];

        if(init >= d){
            ovlp_ct -= ends[init-d];
            if(ovlp_ct<mn){
                mn = ovlp_ct;
                mom = init-d+1;
            }
            if(ovlp_ct>mx){
                mx = ovlp_ct;
                bro = init-d+1;
            }
        }

        init++;
    }

    cout << bro <<" " << mom <<endl;
}



int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--){
//        Dev_Sol1();
//        Dev_Sol2();
//        Dev_Sol3();
        Dev_Sol4();
    }

    return 0;
}
