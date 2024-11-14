#include <bits/stdc++.h>
using namespace std;

void Socks()
{
    int n, m;
    cin>>n>>m;

    int ans = n;

    while(n/m)
    {
        ans += n/m;
        n = n/m + n%m;
    }
    cout<<ans<<endl;

}


int main()
{
    Socks();


    return 0;
}
