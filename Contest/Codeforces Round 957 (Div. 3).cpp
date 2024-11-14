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
//#define sm [](int x, int y) {return x+y;}
#define lcm(a, b)  a*b/__gcd(a, b)
#define bit_count(a) __builtin_popcount(a)
#define clr_LSB(n, i) ( n & ~((1<<(i+1))-1) )
#define clr_MSB(n, i) (  n & ((1<<(i+1))-1) )

using lld = long double;
using namespace std;


/// Problem A. Only Pluses

int max_banana(int x, int y, int z){
    int r =5;
    while(r--){
        if(x<=y && x<=z) x++;
        else if(y<=x && y<=z) y++;
        else z++;
    }
    return x*y*z;
}


void Dev_Sol()
{
    int x, y, z;
    cin>>x>>y>>z;
    cout<<max_banana(x, y, z)<<endl;
}



/// Problem B. Angry Monk

void Dev_Sol2()
{
    int n, m;
    cin>>n>>m;

    vector<int>v(m);

    for(auto &i: v) cin>>i;

    sort(all(v));

    int rem=0;
    for(int i=0; i<m-1; i++){
        rem += (v[i]-1);
    }
    cout<<rem+(n-v[m-1])<<endl;
}


/// problem C. Gorilla and Permutation

void Dev_Sol3()
{
    ll n, a, b;
    cin>>n>>a>>b;

    for(ll r=n; r>a; r--){
        cout<<r<<" ";
    }
    for(ll r=1; r<=a; r++){
        cout<<r<<" ";
    }
    cout<<endl;
}



/// Problem D. Test of Love

void Dev_Sol4()
{
    int n, a, b;
    string s;
    cin>>n>>a>>b>>s;

    int k=0, k1=0;

    for(int i=0; i<s.size(); i++){
        if(s[i]=='W'){
            k++;
            if(k>=a) k1++;
        }
        else if(s[i]=='C'){
            k++;
            if(k>=a){
                pn;
                return;
            }
        }
        else k=0;
    }

    if(k1>b) pn;
    else py;
}





int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--){
//        Dev_Sol();
//        Dev_Sol2();
//        Dev_Sol3();
        Dev_Sol4();
    }

    return 0;
}
