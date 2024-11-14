#include <bits/stdc++.h>
#define ll long long
using namespace std;




int main()
{
    int n;
    cin>>n;

    ll a[n];
    ll mx = 0;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        mx = max(mx, a[i]);
    }

    cout<<mx<<endl;


    return 0;
}
