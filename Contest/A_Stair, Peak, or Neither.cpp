#include <bits/stdc++.h>
#define ll long long
#define fr(i,a,n) for (int i=a; i<n; i++)
#define maze(n) for (int i=0; i<n; i++)
#define all(v) (v).begin(), (v).end()
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using lld = long double;
using namespace std;



void Joy_Sol()
{
    int m, n, o;
    cin>>m>>n>>o;

    int a = max(m, max(n, o));

    if(m==n && n==o) cout<<"NONE"<<endl;
    else if(m<n && n<o) cout<<"STAIR"<<endl;
    else if(m<n && n>o) cout<<"PEAK"<<endl;
    else cout<<"NONE"<<endl;

}



int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
        Joy_Sol();
    }

    return 0;
}

