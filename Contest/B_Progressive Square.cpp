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
    int n, c, d;
    cin>>n>>c>>d;

    vector<int> ara(n*n), r(n*n), rr(n);

    for(int i=0; i<n*n; i++)
    {
        cin>>ara[i];
    }

    sort(all(ara));

    int rem=ara[0];

    for(int i=0; i<n; i++)
    {
        rr[i]= rem+(i*d);
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            r[i*n+j] = rr[i]+(c*j);
        }
    }

    sort(all(r));

    bool ist=false;

    for(int i=0; i<n*n; i++)
    {
        if(ara[i] != r[i]){
            ist = true;
            break;
        }
    }

    if(ist) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;


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
