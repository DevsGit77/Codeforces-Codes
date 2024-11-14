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

    ll od=1, evn=n;


    for(ll i=1; i<=n; i++)
    {
        if(i%2==1)
        {
            cout<<od<<" ";
            od++;
        }
        else
        {
            cout<<evn<<" ";
            evn--;
        }
    }
    cout<<endl;
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
