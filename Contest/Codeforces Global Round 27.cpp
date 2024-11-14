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


// Problem: A. Sliding

void Dev_Sol1() {
    ll n, m, r, c;
    cin >> n >> m >> r >> c;
    n--, m--, r--, c--;

    ll res = (n-r)*m + (n-r)*(m+1) + (m-c);
    cout << res << endl;
}


// Problem: B. Everyone Loves Tres

void Dev_Sol2()
{
    int n;
    cin >> n;

    string s = "36366", res = "";

    if(n==1||n==3) cout << -1 << endl;
    else if(n%2){
        for(int i=0; i<(n-5); i++) res+= '3';
        res += s;
        cout << res << endl;
    }
    else{
        for(int i=0; i<n-2; i++) res+='3';
        res += "66";
        cout << res << endl;
    }

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