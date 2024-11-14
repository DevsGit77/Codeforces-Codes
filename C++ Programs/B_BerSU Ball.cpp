#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;

void Ball()
{
    int n;
    cin>>n;
    vector<int>b(n);

    for(int i=0; i<n; i++) cin>>b[i];

    int m;
    cin>>m;
    vector<int>g(m);

    for(int i=0; i<m; i++) cin>>g[i];

    sort(b.begin(), b.end());
    sort(g.begin(), g.end());

    int cnt=0;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(abs(b[i]-g[j]) <= 1)
            {
                g[j] = 110;
                cnt++;
                break;
            }
        }
    }

    cout<<cnt<<endl;
}


int main()
{
    speed;

//    int tc;
//    cin>>tc;
//
//    while(tc--)
//    {
//
//    }


    Ball();

    return 0;
}
