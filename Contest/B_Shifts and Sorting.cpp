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
    string s;
    cin>>s;

    ll c1=0, res=0;

    maze(s.size())
    {
        if(s[i]=='1') c1++;
        else if(c1==0) continue;
        else res += (c1+1);
    }

    cout<<res<<endl;
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

