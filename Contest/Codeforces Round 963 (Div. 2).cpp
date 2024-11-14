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

using lld = long double;
using namespace std;


/// problem: A. Question Marks


void Dev_Sol()
{
    int n;
    cin>>n;

    string s;
    cin>>s;

    map<char, int> mp;

    int res=0;

    for(int i=0; i<s.size(); i++){
        if(s[i] != '?') mp[s[i]]++;
    }

    for(auto i: mp){
        if(i.second >= n) res += n;
        else if(i.second<n) res += i.second;
    }

    cout<<res<<endl;
}



/// Problem: B. Parity and Sum


void Dev_Sol2()
{
    ll n;
    cin>>n;

    int o= 0, e=0;

    vector<ll>v(n), ov, ev;
    for(auto &i : v){
        cin>>i;
        if(i&1){
            o=1;
            ov.push_back(i);
        }
        else {
            e = 1;
            ev.push_back(i);
        }
    }

    sort(all(ev));
    sort(all(ov));

    if(o==0 || e==0){
        cout<<0<<endl;
    }
    else{

        ll res=0;

        ll ele = ov.back();
        ll sz=ev.size();

        for(ll i=0; i<sz; i++){
            if(ele>ev[i]){
                ele += ev[i];
                res++;
            }
            else{
                cout<<sz+1<<endl;
                return;
            }
        }

        cout<<res<<endl;
    }
}



/// Problem: C. Light Switches


void Dev_Sol3()
{
    ll n, k;
    cin>>n>>k;

    vector<ll>tm(n);


    for(auto &i: tm) cin>>i;

    sort(all(tm));

    for(int i=tm[n-1]; i<=tm[n-1]+k ; ){
        ll t = -1;
        for(int j=0; j<n; j++){
            ll sub = i-tm[j];
            ll res = sub/k;
            if(res & 1 ) {
                t = max(t, k- sub%k);
            }

        }

        if(t==-1){
            cout<<i<<endl;
            return;
        }
        i += t;
    }

    cout<<-1<<endl;
}



int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--){
//        Dev_Sol();
//        Dev_Sol2();
        Dev_Sol3();
    }

    return 0;
}
