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



/// Problem:  A. Diverse Game

void Dev_Sol()
{
    int n, m;
    cin>>n>>m;

    vector<vector<int>> v(n, vector<int>(m));

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>v[i][j];
        }
    }

    if(n*m == 1) cout<<-1<<endl;
    else{
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                int r = (i+1)%n;
                int c = (j+1)%m;

                cout<<v[r][c]<<" ";
            }
            cout<<endl;
        }
    }
}


// Problem: B. Fun Game


void Dev_Sol2()
{
    int n;
    cin>>n;

    string s, t;
    cin>>s>>t;

    bool b=false;

    for(int i=0; i<n; i++){
        if(s[i]=='1') b=true;
        if(s[i]=='0' && t[i]=='1' && !b){
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
//        Dev_Sol();
        Dev_Sol2();
    }

    return 0;
}
