#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using lld = long double;
using namespace std;



void Joy_Sol()
{
    int n;
    cin>>n;

    vector<int>a(n);
    map<int, int>mp;


    int sum=0;
    int j=1;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        sum += a[i];
        mp[sum] = i+1;
    }

    int m;
    cin>>m;
    vector<int>b(m);

    for(int i=0; i<m; i++) cin>>b[i];

    for(int i=0; i<m; i++)
    {
        auto it = mp.lower_bound(b[i]);

        cout<< (*it).second<<endl;
    }
}



int main()
{
    speed;

//    int tc;
//    cin>>tc;
//
//    while(tc--)
//    {
        Joy_Sol();
//    }

    return 0;
}
