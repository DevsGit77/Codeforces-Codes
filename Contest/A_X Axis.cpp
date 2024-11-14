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
    int a, b, c;
    cin>>a>>b>>c;

    int x = abs(b-a)+abs(c-a);
    int y = abs(a-b)+abs(c-b);
    int z = abs(a-c)+abs(b-c);

    cout<<min({x, y, z})<<endl;


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
