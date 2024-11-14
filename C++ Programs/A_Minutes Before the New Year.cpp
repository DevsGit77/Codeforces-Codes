#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;

void Minutes()
{
    int h, m;
    cin>>h>>m;

    int remh= 23-h;
    int remm= 60-m;

    cout<<((remh*60) + remm)<<endl;
}


int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
        Minutes();
    }

    return 0;
}
