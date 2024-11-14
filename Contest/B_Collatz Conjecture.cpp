#include <bits/stdc++.h>
#define ll long long
#define fl(a,n) for (int i=a; i<n; i++)
#define maze(n) for (int i=0; i<n; i++)
#define all(v) (v).begin(), (v).end()
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
#define py cout<<"YES"<<endl
#define pn cout<<"NO"<<endl
using lld = long double;
using namespace std;


void Dev_Sol()
{
    ll x, y, k;
    cin>>x>>y>>k;

    ll rem = y - x%y;
    cout<<rem<<endl;

    while(k>=rem){
        k -= rem;
        x += rem;

        while(x%y==0) x /= y;

        rem = y - x%y;
        cout<<rem<<endl;
        if(x==1){
            k = k%rem;
            x += k;
            k=0;
            break;
        }
    }
    x += k;

    cout<<x<<endl;
}


void Dev_Sol2()
{
    ll x, y, k;
    cin>>x>>y>>k;

    while(k>0 && x!=1){
        ll rm = min(k, (x/y + 1)*y - x);

        x += rm;

        while(x%y==0) x /= y;

        k -= rm;
    }

    cout<< x +(k%(y-1)) <<endl;
}




int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
//        Dev_Sol();
        Dev_Sol2();
    }

    return 0;
}
