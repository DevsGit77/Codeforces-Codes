#include <iostream>
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void sol(int t)
{
    while(t--)
    {
        ll n;
        cin>>n;
        if(n%2==0)
        {
            cout<< n/2 - 1 <<endl;
        }
        else
        {
            cout<< n/2 <<endl;
        }
    }
}

int main()
{
    int r;
    cin>>r;

    sol(r);

    return 0;
}
