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
    int x=0, y=0, n;
    cin>>n;

    string s;

    cin>>s;

    for(int i=0; i<n; i++)
    {
        if(s[i]=='R')
            x++;
        else if(s[i]=='L')
            x--;
        else if(s[i]=='U')
            y++;
        else
            y--;

        if(x==1 && y==1)
        {
            cout<<"YES"<<endl;
            return;
        }
    }

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
