#include <bits/stdc++.h>
#define ll long long
using namespace std;


void solve()
{
    int n,x, dif,  mx_dif = 0;
    cin>>n>>x;

    int a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }


    mx_dif = a[0];
    for(int i=0; i<n-1; i++)
    {
        dif = a[i+1]-a[i];
        mx_dif = max(mx_dif, dif);

    }


    dif = 2*(x - a[n-1]);
    mx_dif = max(mx_dif, dif);

    cout<<mx_dif<<endl;

}


int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }

    return 0;
}
