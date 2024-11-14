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
    int n, w, h;
    cin>>w>>h>>n;

    int ans=1;

    while(h%2==0)
    {
        h /= 2;
        ans *= 2;
    }
    while(w%2==0)
    {
        w /= 2;
        ans *= 2;
    }

    if(ans>=n)
        cout<<"YES"<<endl;
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

