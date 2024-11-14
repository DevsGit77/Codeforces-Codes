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
#define nroot(x, n) pow(x, 1.0/n)


using lld = long double;
using namespace std;

const int N = 3e5+10;


void Dev_Sol1()
{
    ll usb, ps2, b;

    cin>>usb>>ps2>>b;

    vector<pair<ll, string>> vp(N);

    ll m;
    cin>>m;

    for(int i=0; i<m; i++){
        cin>>vp[i].first>>vp[i].second;
    }



    string u = "USB", p = "PS/2";

    sort(vp.begin(), vp.begin()+m);

    ll term=0, res=0;

    for(int i=0; i<m; i++){
        if(usb && vp[i].second==u){
            usb--;
            term++;
            res += vp[i].first;
        }
        else if(ps2 && vp[i].second==p){
            ps2--;
            term++;
            res += vp[i].first;
        }
        else if(b){
            b--;
            term++;
            res += vp[i].first;
        }
    }


    cout<<term<<" "<<res<<endl;
}




int main()
{
    speed;

    Dev_Sol1();

    return 0;
}
