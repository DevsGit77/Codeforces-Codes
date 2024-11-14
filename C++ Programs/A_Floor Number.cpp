#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;


void Floor_Num()
{
    int n, x;
    cin>>n>>x;

    if(n<=2)
        cout<<1<<endl;
    else
    {
        n -= 2;

        cout<<ceil(1.0*n/x) + 1<<endl;
    }
}

int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
        Floor_Num();
    }

    return 0;
}
