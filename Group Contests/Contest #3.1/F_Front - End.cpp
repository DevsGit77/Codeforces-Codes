#include <bits/stdc++.h>
#define ll long long
using namespace std;




int main()
{
    ll n;
    cin>>n;

    ll a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }


    for(int i=0, j=n-1; i<n/2; i++, j--)
    {
        cout<<a[i]<<" "<<a[j]<<" ";
    }

    if(n%2 != 0)
    {
        cout<<a[n/2];
    }


    return 0;
}
