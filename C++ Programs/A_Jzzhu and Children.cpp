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
    int n, m, rem=0;
    cin>>n>>m;

    vector<int>v(n);

    maze(n)
    {
        cin>>v[i];
        v[i] = ceil(v[i]*(1.0)/m);
    }

    vector<int>::iterator it = max_element(all(v));

    maze(n)
    {
        if(v[i]==(*it))
            rem=i+1;
    }

    cout<<rem<<endl;
}


int main()
{
    speed;

    Dev_Sol();

    return 0;
}
