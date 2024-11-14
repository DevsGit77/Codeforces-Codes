
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


// Problem: A. Minimize!

void Dev_Sol1()
{
    int x, y;
    cin>>x>>y;
    cout<<abs(x-y)<<endl;
}

// Problem: B. osu!mania

void Dev_Sol2()
{
    int n;
    cin>>n;

    vector<int>res;

    for(int i=0; i<n; i++){
        string s;
        cin>>s;

        for(int j=0; j<s.size(); j++){

            if(s[j]=='#') res.push_back(j+1);
        }
    }

    reverse(all(res));
    vout(res);
}


// Problem: C. The Legend of Freya the Frog

void Dev_Sol3()
{
    int a, b, c;
    cin>>a>>b>>c;

    int aa = (a+c-1)/c, bb = (b+c-1)/c;

    if(aa>bb) cout<<aa*2-1<<endl;
    else cout<<bb*2<<endl;
}


// Problem: D. Satyam and Counting

void Dev_Sol4()
{
    int n, a, b;
    cin>>n;

    vector<vector<int>> vv(n+2, vector<int>(2, 0));

    for(int i=0; i<n; i++){
        cin>>a>>b;
        vv[a][b]++;
    }

    ll res = 0;

    for(int i=1; i<=n; i++){
        if(vv[i][1] && vv[i][0]) res += (n-2);
        if(vv[i+1][1] && vv[i][0] && vv[i+2][0]) res++;
        if(vv[i+1][0] && vv[i][1] && vv[i+2][1]) res++;
    }

    for(int i=1; i<=n; i++){
        cout<<vv[i][1]<<" ";
    }cout<<endl;
    for(int i=1; i<=n; i++){
        cout<<vv[i][0]<<" ";
    }cout<<endl;



    cout<<res<<endl;
}




// Problem: E. Klee's SUPER DUPER LARGE Array!!!

// Tags: Binary Search



void Dev_Sol5()
{
    ll n, k;
    cin>>n>>k;

    ll lo = k, hi = k+(n-1), mid;
    ll first= lo,  last = hi, res = LLONG_MAX;


    while(lo<=hi){
        mid = (hi+lo)/2;

        ll left = mid*(mid+1)/2ll - first*(first-1)/2ll;
        ll right = last*(last+1)/2ll -  mid*(mid+1)/2ll;

        res = min(res, abs(right-left));

        if(left<right) lo = mid + 1;
        else hi = mid - 1;
    }

    cout<<res<<endl;
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
//        Dev_Sol4();
        Dev_Sol5();
    }

    return 0;
}
