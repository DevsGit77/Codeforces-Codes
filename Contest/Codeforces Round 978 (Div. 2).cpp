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


// Problem: A. Bus to Pénjamo

void Dev_Sol1() {
    int n, r;
    cin >> n >> r;

    int rem=0, hp = 0;

    for(int i=0; i<n; i++){
        int e;
        cin >> e;
        hp += (e/2)*2;
        r -= e/2;
        rem += e%2;
    }
    if(r>rem) cout << hp + rem << endl;
    else cout << hp + (r*2 - rem) << endl;
}




// B. Kar Salesman


void Dev_Sol2()
{
    ll n, x;
    cin >> n >> x;

    ll sum=0, mx = -1;
    vector<ll> v(n);
    for(auto &i: v){
        cin >> i;
        sum += i;
        mx = max(mx, i);
    }

    ll r = ceil(sum*(1.0)/x);

    cout << max(r, mx) <<endl;
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

