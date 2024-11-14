#include <bits/stdc++.h>
#define ll long long
#define fl(a,n) for (int i=a; i<n; i++)
#define maze(n) for (int i=0; i<n; i++)
#define all(v) (v).begin(), (v).end()
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
#define py cout<<"YES"<<endl
#define pn cout<<"NO"<<endl
#define acm(v, x) accumulate(v.begin(), v.end(), x)
#define cnt(v, x) count(v.begin(), v.end(), x)
#define sm [](int x, int y) {return x+y;}
#define lcm(a, b)  a*b/__gcd(a, b)
#define bit_count(a) __builtin_popcount(a)
#define clr_LSB(n, i) ( n & ~((1<<(i+1))-1) )
#define clr_MSB(n, i) (  n & ((1<<(i+1))-1) )

using lld = long double;
using namespace std;


bool is_triangle(vector<int>&v, int sz){
    sort(all(v));

    for(int i=0; i<sz-2; i++){
        if(v[i]+v[i+1]>v[i+2]) return true;
    }
    return false;
}


void Dev_Sol()
{
    int n;
    cin>>n;

    vector<int>v(n);

    for(auto &i : v) cin>>i;

    if(is_triangle(v, v.size())) py;
    else pn;
}


int main()
{
    speed;


    Dev_Sol();

    return 0;
}

