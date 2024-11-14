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
#define pll pair<ll, ll>

using lld = long double;
using namespace std;


// Problem: A. Rectangle Arrangement

void Dev_Sol1() {
    int n;
    cin >> n;

    int mx1 = -1, mx2 = -1;

    while(n--){
        int d,f;
        cin >> d >> f;

        mx1 = max(mx1, d);
        mx2 = max(mx2, f);
    }
    cout << (mx1+mx2)*2 <<endl;
}


// Problem: B. Stalin Sort


void Dev_Sol2()
{
    int n;
    cin >> n;

    vector<int> ara(n);
    vin(ara);

    int vul = n;
    for(int i=0; i<n; i++){
        int cnt = 0;
        for(int j=0; j<n;j++){
            if(j<i || ara[i] < ara[j]) cnt++;
        }
        vul = min(cnt, vul);
    }

    cout << vul <<endl;


}


// Problem : C. Add Zeros

void Dev_Sol3(){
    ll n;
    cin >> n;

    vector<pll> vp(n+1);
    for(ll i=1; i<=n; i++){
        ll x;
        cin >> x;
        vp[i].first = x+i-1;
        vp[i].second =  i-1;
    }

    vp[1].first = 0;

    sort(all(vp));
    map<ll, bool> mpp;

    mpp[n] = true;

    ll res = 0, i=1;

    while(i<=n){
        if(mpp[vp[i].first]){
            ll mxl = vp[i].first + vp[i].second;
            mpp[mxl] = true;
        }
        i++;
    }

    for(auto pr: mpp) if(pr.second) res = pr.first;
    cout << res << endl;
}




int main() {
    speed;

    int tc;
    cin>>tc;
    while(tc--) {
//        Dev_Sol1();
//        Dev_Sol2();
        Dev_Sol3();
    }

    return 0;
}
