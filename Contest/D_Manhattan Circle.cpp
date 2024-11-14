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

    int x1=0, y1=0, x2=0, y2=0;
    bool f = true;

    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        for(int j=0; j<m; j++){
            if(f && s[j]=='#'){
                f=false;
                x1 = i+1;
                y1 = j+1;
            }
            else if(s[j]=='#'){
                x2 = i+1;
                y2 = j+1;
            }
        }
    }

    if(x2==0 && y2==0)
        cout<<x1<<" "<<y1<<endl;
    else
        cout<<(x1+x2)/2<<" "<<y1<<endl;
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

