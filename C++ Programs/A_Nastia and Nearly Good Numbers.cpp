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
    ll a, b;
    cin>>a>>b;

    if(b>2)
    {
        cout<<"YES"<<endl;
        cout<<a<<" "<<a*(b-1)<<" "<<a*b<<endl;
    }
    else if(b==2)
    {
        cout<<"YES"<<endl;
        cout<<a<<" "<<a*((2*b)-1)<<" "<<2*(a*b)<<endl;
    }
    else
        cout<<"NO"<<endl;
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