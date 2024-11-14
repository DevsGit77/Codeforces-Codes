#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;

void Candies()
{
    ll n, rem;
    cin>>n;

    for(int i=2; ; i++)
    {
        rem = pow(2, i) - 1;
        if(n%rem == 0)
        {
            cout<<n/rem<<endl;
            break;
        }
    }
}


int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
        Candies();
    }

    return 0;
}
