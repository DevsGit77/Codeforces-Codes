#include <bits/stdc++.h>
#define ll long long
#define fr(i,a,n) for (int i=a; i<n; i++)
#define maze(n) for (int i=0; i<n; i++)
#define all(v) (v).begin(), (v).end()
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using lld = long double;
using namespace std;


void Dev_Sol()
{
    ll n, sum;
    cin>>n>>sum;

    if(n==1)
    {
        cout<<sum<<endl;
        return;
    }

    ll mx1 = pow(2, (ll)log2(sum))-1; /// in binary 2^n - 1 is max one


    fr(i,0, n-2)
    {
        cout<<0<<" ";
    }
    cout<<mx1<<" ";
    cout<<sum-mx1<<" "<<endl;

}


int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
        Dev_Sol();
    }

    return 0;
}

