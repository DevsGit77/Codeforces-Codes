#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;

    ll a[t];

    for(int i=0; i<t; i++)
    {
        cin>>a[i];
        if(a[i]==0)
        {
            reverse(a, a+i);
        }
    }

    for(int i=0; i<t; i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
