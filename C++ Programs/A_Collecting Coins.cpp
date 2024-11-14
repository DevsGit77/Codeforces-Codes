
#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;

void Collecting_Coins()
{
    ll a, b, c, n;
    cin>>a>>b>>c>>n;


    ll mxc = max(a, max(b, c));

    ll ac= mxc-a, bc=mxc-b, cc=mxc-c;

    n = n-ac-bc-cc;

    if(n%3 == 0 && n>=0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}


int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
        Collecting_Coins();
    }

    return 0;
}
