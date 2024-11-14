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
    ll n, l, r;
    cin>>n>>l>>r;

    vector<ll> vec(n);

    maze(n) cin>>vec[i];

    ll res=0, pre=0, j=0;

    maze(n)
    {
        pre += vec[i];

        if(pre>=l && pre<=r){
            res++;
            pre = 0;
            j = i+1;

        }
        else if(pre>r){
            while(pre>r && j<=i){
                pre -= vec[j];
                j++;
            }
            if(pre>=l && pre<=r){
                res++;
                pre=0;
                j = i+1;
            }
        }
    }

    cout<<res<<endl;
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
