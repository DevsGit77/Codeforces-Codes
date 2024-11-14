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


// Problem: A. Dora's Set


void Dev_Sol1()
{
    int a, b;
    cin>>a>>b;

    int pr = (b+1)/2 - a/2;

    cout<< pr/2 <<endl;
}




// problem:


void Dev_Sol2()
{
    int n, m;
    cin>>n>>m;

    vector<int>v(n), res;

    for(auto i=0; i<n; i++){
        cin>>v[i];
    }
    sort(all(v));

    int mx = v[n-1];

    while(m--){
        char ch;
        int l, r;
        cin>>ch>>l>>r;

        if(ch == '+' && (mx>=l && mx<=r)){
            mx++;
            res.push_back(mx);
        }
        else if(ch == '-' && (mx>=l && mx<=r)){
            mx--;
            res.push_back(mx);
        }
        else res.push_back(mx);
    }

    vout(res);
}




// Problem: C. Dora and C++


void Dev_Sol3()
{
    int n, a, b;
    cin >> n >> a >> b;

    int gc = __gcd(a, b);

    vector<int>vec(n);

    maze(n){
        cin>>vec[i];
        vec[i] %= gc;
    }
    sort(all(vec));

    int rng = vec[n-1]-vec[0];

    fl(i, 0, n-1){
        rng = min(rng, (vec[i]+gc)-vec[i+1]);
    }

    cout<<rng<<endl;
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
