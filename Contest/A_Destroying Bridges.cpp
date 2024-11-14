#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;

void DB()
{
    int n, k;
    cin>>n>>k;

    int b = n-1;

    if(k >= b)
        cout<<1<<endl;
    else
        cout<<n<<endl;
}


int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
        DB();
    }

    return 0;
}
