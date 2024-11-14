#include <bits/stdc++.h>
#define ll long long
#define fr(i,a,n) for (int i=a; i<n; i++)
#define maze(n) for (int i=0; i<n; i++)
#define all(v) (v).begin(), (v).end()
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using lld = long double;
using namespace std;


bool search(int n, int m, vector<vector<char>> &v, char ch)
{
    bool ist = false;


    maze(n)
    {
        if(v[i][0] == ch)
        {
            ist = true;
            break;
        }
    }
    if(!ist) return false;

    ist = false;
    maze(n)
    {
        if(v[i][m-1]==ch)
        {
            ist = true;
            break;
        }
    }
    if(!ist) return false;

    ist = false;
    maze(m)
    {
        if(v[0][i]== ch)
        {
            ist = true;
            break;
        }
    }
    if(!ist) return false;


    ist = false;
    maze(m)
    {
        if(v[n-1][i] == ch)
        {
            ist = true;
            break;
        }
    }
    if(!ist) return false;

    return true;
}


void Dev_Sol()
{
    int r, c;
    cin>>r>>c;

    vector<vector<char>> vc(r, vector<char>(c));

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cin>>vc[i][j];
        }
    }

    bool res = search(r, c, vc, 'W') || search(r, c, vc, 'B');

    if(res)
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

