#include <bits/stdc++.h>
#define ll long long
#define fl(a,n) for (int i=a; i<n; i++)
#define maze(n) for (int i=0; i<n; i++)
#define rvmaze(n) for (int i=n-1; i>=0; i--)
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


/// Problem: A. Split the Multiset

void Dev_Sol()
{
    int n, b;
    cin>>n>>b;

    int cnt=0;

    for(;n>1;){
        n -= (b-1);
        cnt++;
    }
    cout<<cnt<<endl;
}



/// Problem: B. Make Majority

void Dev_Sol2()
{
    int n;
    cin>>n;

    string num;
    cin>>num;

    int c0=0, c1=0;
    char c;


    maze(n)
    {
        if(num[i]=='1'){
            c = '1';
            c1++;
        }
        else if(num[i]=='0' && c != '0'){
            c = '0';
            c0++;
        }
    }

    if(c1>c0) py;
    else pn;

}


/// Problem: C. Increasing Sequence with Fixed OR

void Dev_Sol3()
{
    ll n;
    cin>>n;

    ll rem = n;


    vector<ll> res;

    for(int i=0; i<60;i++){
        if(rem&(1ll<<i) && ((1ll<<i)<rem)){
            res.push_back(rem-(1ll<<i));
        }
    }
     res.push_back(n);

     cout<<res.size()<<endl;

     sort(all(res));

     for(auto i : res){
        cout<<i<<" ";
     }
     cout<<endl;

}




int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--){
//        Dev_Sol();
        Dev_Sol2();
//        Dev_Sol3();
    }

    return 0;
}
