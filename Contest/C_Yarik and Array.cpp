#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin>>n;

    int a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    int dif_max = a[0];

    int mn = min(0, a[0]), sum = a[0];

    for(int i=1; i<n; i++)
    {
        if(abs(a[i]%2) == abs(a[i-1]%2))
        {
            mn = 0;
            sum = 0;
        }

        sum += a[i];
        dif_max = max(dif_max, (sum - mn));

        mn = min(mn, sum);
    }

    cout<<dif_max<<endl;

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
