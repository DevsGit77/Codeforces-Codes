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
using lld = long double;
using namespace std;

/// Problem A


void Dev_Sol()
{
    int n, k;
    cin>>n>>k;

    int res = (n-1)*k;

    cout<<res+1<<endl;
}



/// Problem:  B. K-Sort

void Dev_Sol2()
{
    ll n;
    cin>>n;

    vector<ll>v(n);

    for(auto &i : v) cin>>i;

    ll res=0, mx= LONG_MIN;

    if(is_sorted(all(v))) cout<<0<<endl;
    else{
        for(int i=0; i<n-1; i++){
            if(v[i]>v[i+1]){
                res += v[i]-v[i+1];
                mx = max(mx, v[i]-v[i+1]);

                v[i+1] = v[i];
            }
        }

        cout<<res+mx<<endl;
    }
}



/// problem C. Basil's Garden

void Dev_Sol3()
{
    int n;
    cin>>n;

    vector<ll>v(n);

    ll res=0;

    maze(n)
    {
        cin>>v[i];

        res = max(res, v[i]+i);
    }

    cout<<res<<endl;
}


/// problem D. World is Mine

void Dev_Sol4()
{

}

int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
//        Dev_Sol();
//        Dev_Sol2();
        Dev_Sol3();
    }

    return 0;
}
