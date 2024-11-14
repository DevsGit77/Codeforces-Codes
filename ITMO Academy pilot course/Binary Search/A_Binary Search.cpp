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

// Problem Link: https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/A


void Dev_Sol1()
{
    int n, k;
    cin>>n>>k;

    vector<ll>ara(n);
    for(int i=0; i<n; i++){
        cin>>ara[i];
    }

    while(k--){
        ll q;
        cin>>q;

        int lo=0, hi=n-1, mid;

        while(hi-lo>1){
            mid = (lo+hi)/2;
            if(q>=ara[mid]){
                lo = mid;
            }
            else hi = mid-1;
        }
        if(ara[lo]==q) py;
        else if(ara[hi]==q) py;
        else pn;
    }
}



int main()
{
    speed;

    Dev_Sol1();

    return 0;
}

