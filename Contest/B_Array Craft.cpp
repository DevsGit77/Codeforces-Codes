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
#define maxsbi(x) __lg(x)
#define ffsbi(x) __builtin_ffs(x)


using lld = long double;
using namespace std;




void Dev_Sol1()
{
    int n, x, y;
    cin>>n>>x>>y;

    vector<int>v(n);

    for(int i=y-1; i<x; i++){
        v[i] = 1;
    }

    int r=-1;
    for(int i=y-2; i>=0; i--){
        if(r<0){
            v[i]=-1;
            r=0;
        }
        else if(r==0){
            r=-1;
            v[i]=1;
        }
    }

    r=-1;

    for(int i=x; i<n; i++){
        if(r<0){
            v[i]=-1;
            r=0;
        }
        else if(r==0){
            r=-1;
            v[i]=1;
        }
    }

    vout(v);
}



int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--){
        Dev_Sol1();
    }

    return 0;
}
