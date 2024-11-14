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



/// problem  A. Array Divisibility

void Dev_Sol1()
{
    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        cout<<i<<" ";
    }
    cout<<endl;
}


/// Problem B. Corner Twist

void Dev_Sol2()
{
    int n, m;
    cin>>n>>m;

    vector<int>v1(n+10), v2(m+10);

    string s;

    for(int i=1; i<=n; i++){
        cin>>s;
        for(int j=1; j<=m; j++){
            v1[i] += (s[j-1]-'0');
            v2[j] += (s[j-1]-'0');
        }
    }



    for(int i=1; i<=n; i++){
        cin>>s;
        for(int j=1; j<=m; j++){
            v1[i] += 3-(s[j-1]-'0');
            v2[j] += 3-(s[j-1]-'0');
        }
    }

    for(auto i : v1){
        if(i%3){
            pn;
            return;
        }
    }

    for(auto i : v2){
        if(i%3){
            pn;
            return;
        }
    }

    py;
}

/// Alternative Solution

void Dev_Sol3()
{
    int n, m;
    cin>>n>>m;

    vector<string>v1(n), v2(n);

    for(auto &i : v1) cin>>i;
    for(auto &i : v2) cin>>i;

    maze(n)
    {
        int a=0, b=0;
        for(int j=0; j<m; j++){
            a += (v1[i][j]-'0');
            b += (v2[i][j]-'0');
        }
        if(a%3 != b%3){
            pn;
            return;
        }
    }

    maze(m)
    {
        int a=0, b=0;
        for(int j=0; j<n; j++){
            a += (v1[j][i]-'0');
            b += (v2[j][i]-'0');
        }
        if(a%3 != b%3){
            pn;
            return;
        }
    }

    py;
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
