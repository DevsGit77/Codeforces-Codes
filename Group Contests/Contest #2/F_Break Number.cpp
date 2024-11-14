#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;
    ll cnt=0,rem=0;
    ll maxi,n;


    while(t--)
    {
        cin>>n;

        while(n%2==0)
        {
            n =n/2;
            cnt++;
        }
        maxi = max(rem, cnt);
        rem = maxi;
        cnt = 0;
    }
    cout<<maxi;


    return 0;
}
