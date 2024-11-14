#include <bits/stdc++.h>
#define ll long long
#define fl(i,a,n) for (int i=a; i<n; i++)
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



/// Problem: A. Legs


void Dev_Sol()
{
    int n;
    cin>>n;

    int res = (n/4) + ((n%4)/2);

    cout<<res<<endl;
}



/// Problem: B. Scale


void Dev_Sol2()
{
    int n, k;
    cin>>n>>k;

    vector<string>vs(n);

    for(int i=0; i<n; i++){
        cin>>vs[i];
    }

    int r = n/k;

    for(int i=0; i<r; i++){
        for(int j=0; j<r; j++){
            cout<<vs[i*k][j*k];
        }
        cout<<endl;
    }
}



/// Problem: C. Sort

const int M = 2e5+10;

vector<vector<int>> c(26, vector<int>(M));


void Dev_Sol3()
{
    int n, q;
    string a, b;

    cin>>n>>q>>a>>b;


    fl(j, 0, n){
        fl(i, 0, 26){
            c[i][j+1] = c[i][j];
        }

        c[a[j]-'a'][j+1]++;
        c[b[j]-'a'][j+1]--;

    }

    while(q--){
        int l, r;
        cin>>l>>r;
        l--;

        int res=0;

        fl(i, 0, 26){
            if(c[i][r] > c[i][l]){
                res += c[i][r] - c[i][l];
            }
        }
        cout<<res<<endl;
    }
}


/// Problem: D. Fun


void Dev_Sol4()
{
    int n, x;
    cin>>n>>x;

    ll res = 0;
    ll mn = min(n, x);

    for(ll a=1; a<=mn; a++){
        for(ll b = 1; a*b<=n && (a+b)<=x; b++){
            ll rem = (n-(a*b))/(a+b);

            ll c = min(rem, x-a-b);

            res += c;
        }
    }

    cout<<res<<endl;
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
