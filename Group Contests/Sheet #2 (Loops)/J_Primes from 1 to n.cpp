#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool checkPrime(int p)
{
    if(p==1 || p == 0)
        return false;

    for(int i=2; i<=p/2; i++)
    {
        if(p%i == 0)
        {
            return false;
        }
    }

    return true;
}


int main()
{
    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        if(checkPrime(i))
        {
            cout<<i<<" ";
        }
    }

    return 0;
}
