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
    int a, b, c, d;
    cin>>a>>b>>c>>d;

    if( (a>=b && c<=d) || (b>=a && d<=c) ) pn;
    else py;
}

void Dev_Sol2()
{
    int a, b, c, d;
    cin>>a>>b>>c>>d;

    if( (a<b && c>d) || (b<a && d>c) ) pn;
    else py;
}


int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
//        Dev_Sol();
        Dev_Sol2();
    }

    return 0;
}
