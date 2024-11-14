#include <bits/stdc++.h>
#define ll long long
#define fr(i,a,n) for (int i=a; i<n; i++)
#define whl(n) while(n--)
#define maze(n) for (int i=0; i<n; i++)
#define all(v) (v).begin(), (v).end()
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using lld = long double;
using namespace std;


void Dev_Sol()
{
    int n, x, pre = 1, ans=0;
    cin>>n>>x;

    whl(n)
    {
        int l, r;
        cin>>l>>r;

        while((pre + x) <= l) pre += x;

        ans += (r-pre)+1;

        pre = r+1;
    }
    cout<<ans<<endl;
}


int main()
{
    speed;

    Dev_Sol();


    return 0;
}
