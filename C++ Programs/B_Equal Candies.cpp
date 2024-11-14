#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using lld = long double;
using namespace std;


void Equal_Candies()
{
    ll n;
    cin>>n;

    vector<ll>cnd(n);

    ll tc = 0;

    for(int i=0; i<n; i++) cin>>cnd[i];

    sort(cnd.begin(), cnd.end());

    for(int i=0; i<n; i++)
    {
        tc += cnd[i]-cnd[0];
    }

    cout<<tc<<endl;

}


int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
        Equal_Candies();
    }

    return 0;
}

