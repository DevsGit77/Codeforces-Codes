
#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;


void New_Year()
{
    ll n;
    cin>>n;

    ll rem = n%2020;

    ll res = ((n-rem)/2020)-rem;

    if(res >= 0)
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
        New_Year();
    }

    return 0;
}
