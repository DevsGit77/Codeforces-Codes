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


void Dev_Sol1()
{
    ll n, k;
    cin>>n>>k;

    vector<ll> divisors;

    for(ll i=1; i*i<=n; i++){
        if(n%i==0){
            divisors.push_back(i);
            if((n/i)!= i){
                divisors.push_back(n/i);
            }
        }
    }

    sort(all(divisors));

    if(divisors.size()<k) cout<<-1<<endl;
    else{
        cout<<divisors[k-1]<<endl;
    }
}



int main()
{
    speed;

    Dev_Sol1();

    return 0;
}
