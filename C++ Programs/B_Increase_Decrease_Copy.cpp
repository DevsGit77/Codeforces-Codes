#include <bits/stdc++.h>
#define ll long long
#define fl(a,n) for (int i=a; i<n; i++)
#define maze(n) for (int i=0; i<n; i++)
#define all(v) (v).begin(), (v).end()
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
#define py cout<<"YES"<<endl
#define pn cout<<"NO"<<endl
using lld = long double;
using namespace std;


void Dev_Sol()
{
    ll n;
    cin>>n;

    vector<ll>a(n+1), b(n+1);

    maze(n) cin>>a[i];
    maze(n+1)cin>>b[i];



    ll sum=1 , rem = LONG_MAX;

    maze(n)
    {
        sum += abs(a[i]-b[i]);

        rem = min(rem, min(abs(b[i]-b[n]), abs(a[i]-b[n])));

        if(min(a[i], b[i])<= b[n] && b[n] <= max(a[i], b[i]))
            rem=0;
    }
    cout<<sum+rem<<endl;
}



void Dev_Sol2()
{
    ll n;
    cin>>n;

    vector<ll>a(n), b(n+1);

    maze(n) cin>>a[i];
    maze(n+1)cin>>b[i];

    ll res = 1, mn=LONG_MAX;

    maze(n)
    {
        if(a[i]>b[i]) swap(a[i], b[i]);
        res += b[i]-a[i];

        mn = min({mn, abs(a[i]-b[n]), abs(b[i]-b[n])});
        if(a[i]<=b[n] && b[n] <= b[i]) mn=0;
    }
    cout<<res+mn<<endl;

}


int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
        Dev_Sol2();
    }

    return 0;
}

