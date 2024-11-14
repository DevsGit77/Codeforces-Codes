#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int t)
{
    while(t--)
    {
        ll n, fact = 1;
        cin>>n;

        for(int i=1; i<=n; i++)
        {
            fact *= i;
        }

        cout<<fact<<endl;
    }
}



int main()
{
    int t;
    cin>>t;

    solve(t);


    return 0;
}
