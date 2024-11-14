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


vector<vector<ll>> subarray(vector<ll>&v, ll n){

    vector<vector<ll>> subsets;

    for (int i=0; i <n; i++)
    {
        for (int j=i; j<n; j++)
        {
            vector<ll>subset;
            for (int k=i; k<=j; k++){
                subset.push_back(v[k]);
            }

            subsets.push_back(subset);
        }
    }

    return subsets;
}


void Dev_Sol()
{
    ll n, k;
    cin>>n>>k;

    vector<ll> v(n);
    for(auto &i: v) cin>>i;

    vector<vector<ll>> sub  = subarray(v, n);

    ll res=0;

    for(auto sets: sub){
        if(sets.size()>1){
            ll mx = *max_element(all(sets));
            ll mn = *min_element(all(sets));
            if(abs(mx-mn) == k){
                res++;
            }
        }
    }

    cout<<res<<endl;
}



int main()
{
    speed;

    Dev_Sol();


    return 0;
}
