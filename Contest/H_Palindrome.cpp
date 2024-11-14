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
    string p;
    cin>>p;

    string rs="";

    for(int i=p.size()-1; i>=0; i--)
    {
        rs += p[i];
    }

    if(p==rs) cout<<"YES"<<endl;
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
        Joy_Sol();
    }

    return 0;
}

