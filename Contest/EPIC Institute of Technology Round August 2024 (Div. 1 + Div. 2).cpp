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
#define maxsbi(x) __lg(x)
#define ffsbi(x) __builtin_ffs(x)
#define sqr(n) ((n)*(n))


using lld = long double;
using namespace std;


/// Problem:


void Dev_Sol1()
{
    int a, b, k;
    cin>>a>>b>>k;

    int res = min(a, k) * min(b, k);

    cout<<res<<endl;

}


/// Problem: B. Removals Game


void Dev_Sol2()
{
    int n;
    cin>>n;

    vector<int>al(n), bb(n);

    string a="Alice", bo="Bob";

    maze(n) cin>>al[i];
    maze(n) cin>>bb[i];

    bool b=true;


    maze(n){
        if(al[i]!=bb[i]) b=false;
    }

    reverse(al.begin(), al.end());

    if(b==false){
        b= true;

        maze(n){
            if(al[i]!=bb[i]) b = false;
        }
    }

    if(b) cout<<bo<<endl;
    else cout<<a<<endl;

}


/// Problem: C. Black Circles


void Dev_Sol3()
{
    ll n;
    cin>>n;

    vector<pair<ll, ll>> vp(n);

    for(int i=0; i<n; i++){
        cin>>vp[i].first>>vp[i].second;
    }

    ll xs, ys, xt, yt;
    cin>>xs>>ys>>xt>>yt;

    ll dis = sqr(xt-xs)+ sqr(yt-ys);


    for(auto pr: vp){
        ll cur_dis = sqr(pr.first-xt) + sqr(pr.second-yt);

        if(dis>=cur_dis){
            pn;
            return;
        }
    }

    py;
}




int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--){
//        Dev_Sol1();
//        Dev_Sol2();
        Dev_Sol3();
    }

    return 0;
}
