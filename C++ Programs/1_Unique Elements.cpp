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

//CodeRams Algorithm Contest #1
// Problem: 1. Unique Elements
// https://codeforces.com/gym/102892/problem/1



void Dev_Sol1()
{
    int n;
    cin>>n;

    map<int, int> mp;

    for(int i=0; i<n; i++){
        int ele;
        cin>>ele;

        mp[ele]++;
    }

    int res=0;

    for(auto i: mp){
        if(i.second==1) res++;
    }

    cout<<res<<endl;


}



int main()
{
    speed;

    Dev_Sol1();

    return 0;
}
