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
    int n;
    cin>>n;

    vector<ll>ara(n), ps(n);

    maze(n){
        cin>>ara[i];

        if(i==0) ps[i]=ara[i];
        else
            ps[i] = ps[i-1] + ara[i];
    }

    ll mx = -1, cnt=0;

    maze(n){
        mx = max(mx, ara[i]);
        if(ps[i]-mx == mx) cnt++;
    }
    cout<<cnt<<endl;

}


int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
        Dev_Sol();
    }

    return 0;
}

