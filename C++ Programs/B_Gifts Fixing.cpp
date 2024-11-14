#include <bits/stdc++.h>
#define ll long long
#define fr(i,a,n) for (int i=a; i<n; i++)
#define maze(n) for (int i=0; i<n; i++)
#define all(v) (v).begin(), (v).end()
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using lld = long double;
using namespace std;


void Dev_Sol()
{
    ll n;
    cin>>n;

    vector<ll>v1(n), v2(n);

    ll mn1=INT_MAX, mn2=INT_MAX, cnt=0;

    maze(n)
    {
        cin>>v1[i];
        mn1 = min(mn1, v1[i]);
    }
    maze(n)
    {
        cin>>v2[i];
        mn2 = min(mn2, v2[i]);
    }

    maze(n)
    {
        cnt += max((v1[i]-mn1), (v2[i]-mn2));
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
