#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;

void Books()
{
    ll n, t, sum=0, cnt=0;
    cin>>n>>t;

    vector<ll>rt(n);

    for(int i=0; i<n; i++)
    {
        cin>>rt[i];
    }

    //sort(rt.begin(), rt.end());

    int r=0;

    for(int i=0; i<n; i++)
    {
        sum += rt[i];

        if(sum <= t)
        {
            cnt++;
        }
        else
        {
            sum -= rt[r];
            r++;
        }

    }

    cout<<cnt<<endl;


}


int main()
{
    speed;

//    int tc;
//    cin>>tc;
//
//    while(tc--)
//    {
        Books();
//    }

    return 0;
}
