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
    int n;
    cin>>n;

    vector<int>a(n), b(n);

    maze(n) cin>>a[i];
    maze(n) cin>>b[i];

    int cnt=0;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(a[i] <= b[j])
            {
                cnt++;
                b[j]=0;
                break;
            }
        }

    }

    cout<<n-cnt<<endl;


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

