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
    int n, m;
    cin>>n>>m;

    vector< vector<int> > v(n+2, vector<int> (m+2));

    for(int r=1; r<=n; r++){
        for(int c=1; c<=m; c++){
                cin>>v[r][c];
        }
    }


    for(int r=1; r<=n; r++){
        for(int c=1; c<=m; c++){
            if(v[r][c]>v[r+1][c] && v[r][c]>v[r][c+1] && v[r][c]>v[r-1][c] && v[r][c]>v[r][c-1]){
                int pre=0;
                if(r+1<=n) pre = max(pre, v[r+1][c]);
                if(c+1<=m) pre = max(pre, v[r][c+1]);
                if(r-1>=1) pre = max(pre, v[r-1][c]);
                if(c-1>=1) pre = max(pre, v[r][c-1]);

                v[r][c] = pre;
            }
        }
    }

    for(int r=1; r<=n; r++){
        for(int c=1; c<=m; c++){
                cout<<v[r][c]<<" ";
        }
        cout<<endl;
    }

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

