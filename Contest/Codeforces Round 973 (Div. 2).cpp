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


//Problem: A. Zhan's Blender

void Dev_Sol1()
{
    int n, x, y;
    cin >> n >> x >> y;

    int res = ceil(n*(1.0)/min(x, y));

    cout<< res <<endl;

}


// Problem: B. Battle for Survive


void Dev_Sol2()
{
    ll n;
    cin >> n;

    vector<ll> rat(n);

    vin(rat);

    ll sum = 0, rem = rat[n-1]-rat[n-2];

    for(int i=0;i<n-2; i++) sum += rat[i];

    cout<<rem + sum<<endl;
}



// Problem: D. Minimize the Difference


void Dev_Sol4()
{
    ll n;
    cin >> n;
    vector<ll> ara(n);

    ll mx = LLONG_MIN, mn = LLONG_MAX, sum = 0;

    for(int i=0;i<n; i++){
        cin >> ara[i];
        sum += ara[i];
        mn = min(mn, sum/(i+1));
    }

    reverse(all(ara));

    sum = 0;

    for(int i=0; i<n; i++){
        sum += ara[i];
        mx = max(mx, (sum+i)/(i+1));
    }

    cout << mx - mn << endl;
}



int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--){
//        Dev_Sol1();
//        Dev_Sol2();
        Dev_Sol4();
    }

    return 0;
}