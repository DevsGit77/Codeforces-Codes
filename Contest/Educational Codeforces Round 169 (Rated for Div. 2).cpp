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


using lld = long double;
using namespace std;


// Problem: A. Closest Point

void Dev_Sol1()
{
    int n;
    cin>>n;

    vector<int>s(n);

    for(auto &i: s) cin>>i;

    if(n>2) pn;
    else{
        if(abs(s[1]-s[0])==1) pn;
        else py;
    }

}



// Problem: B. Game with Doors


void Dev_Sol2()
{
    int a1, a2, b1, b2;
    cin>>a1>>a2>>b1>>b2;

    if(a1>b2 || b1>a2) cout<<1<<endl;
    else{
        map<int, int>mp;

        for(int i=min(a1, a2); i<=max(a1, a2); i++){
            mp[i]++;
        }
        for(int i=min(b1, b2); i<=max(b1, b2); i++){
            mp[i]++;
        }

        int res=0, f=0, l=0;
        int mn = min(a1, min(a2, min(b1, b2)));
        int mx = max(a1, max(a2, max(b1, b2)));

        for(int i=1; i<=100; i++){
            if(mp[i]==2){
                res++;
                if(f==0) f=i;
                l = i;
            }
        }

        if(mx>l) res++;
        if(mn<f) res++;
        cout<<res-1<<endl;
    }
}


// Alternative


void Dev_Sol2_Alt()
{
    ll al, ar, bl, br;
    cin>>al>>ar>>bl>>br;

    ll r = min(ar, br);
    ll l = max(al, bl);

    ll res=0;

    if(r<l) cout<<1<<endl;
    else if(r==l) cout<<2<<endl;
    else{
        ll l1 = min(al, bl), r1 = max(al, bl);
        ll l2 = min(ar, br), r2 = max(ar, br);

        if(l1<r1) res++;

        if(l2<r2) res++;

        res += r-l;

        cout<<res<<endl;
    }
}



// Problem: C. Splitting Items


void Dev_Sol3()
{
    int n, k;
    cin>>n>>k;

    vector<int>cost(n);
    for(auto &i: cost) cin>>i;
    sort(all(cost));
    reverse(all(cost));

    for(int i=0; i<n-1; i+=2){
        if(k==0) break;

        int rem = min(cost[i]-cost[i+1], k);
        k -= rem;

        cost[i+1] += rem;
    }

    int res=0, os=0, es=0;

    for(int i=0; i<n; i++){
        if(i&1) os+= cost[i];
        else es += cost[i];
    }

    res = abs(es-os);

    cout<<res<<endl;
}



// Problem: D. Colored Portals


void Dev_Sol4()
{

}



int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--){
//        Dev_Sol1();
//        Dev_Sol2();
        Dev_Sol2_Alt();
//        Dev_Sol3();
//        Dev_Sol4();
    }

    return 0;
}
