#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;

void Cutting()
{
    ll h, w;
    cin>>h>>w;

    if((h%2 != 0 && w%2 != 0) || (h%2 != 0 && w/2 == h) || (h/2 == w && w%2 != 0))
        cout<<"No"<<endl;
    else
        cout<<"Yes"<<endl;
}



int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
        Cutting();
    }

    return 0;
}
