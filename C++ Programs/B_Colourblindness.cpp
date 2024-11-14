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
    int n;
    cin>>n;

    string a, b;
    cin>>a>>b;

    bool f=false;

    for(int i=0; i<n; i++)
    {
        if(a[i] == 'R' && b[i] !='R' || a[i]!='R' && b[i]=='R')
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
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

