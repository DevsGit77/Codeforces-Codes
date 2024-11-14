#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;

void Sticks()
{
    ll n;
    cin>>n;

    ll sm = n*(n+1)/2;

    cout<< sm/n <<endl;

}


int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
        Sticks();
    }

    return 0;
}
