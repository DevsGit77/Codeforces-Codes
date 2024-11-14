#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;

void sale()
{
    int n, m, sum=0;
    cin>>n>>m;

    vector<int>v(n);

    for(int i=0; i<n; i++) cin>>v[i];

    sort(v.begin(), v.end());

    for(int i=0; i<m; i++)
    {
        if(v[i] < 0)
        {
            sum += abs(v[i]);
        }
    }
    cout<<sum<<endl;
}


int main()
{
    speed;

    sale();

//    int tc;
//    cin>>tc;
//
//    while(tc--)
//    {
//
//    }

    return 0;
}
