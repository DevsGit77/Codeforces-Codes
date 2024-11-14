#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int a, b, c;
    cin>>a>>b>>c;


    if(abs(b-c)%2 == 0)
        cout<<1<<" ";
    else
        cout<<0<<" ";

    if(abs(a-c)%2 == 0)
        cout<<1<<" ";
    else
        cout<<0<<" ";

    if(abs(a-b)%2 == 0)
        cout<<1<<endl;
    else
        cout<<0<<endl;

}


int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }

    return 0;
}
