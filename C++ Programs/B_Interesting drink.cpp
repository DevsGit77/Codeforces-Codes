#include <bits/stdc++.h>
#define ll long long
using namespace std;




int main()
{
    ll n;
    cin>>n;

    vector<ll>sp(n);

    for(int i=0; i<n; i++)
    {
        cin>>sp[i];
    }
    sort(sp.begin(), sp.end());

    ll q;
    cin>>q;

    while(q--)
    {
        ll cs;
        cin>>cs;

        ll st=0, ed = n-1;

        while(st <= ed)
        {
            ll mid = (st+ed)/2;

            if(sp[mid] <= cs)
            {
                st = mid + 1;
            }
            else
            {
                ed = mid-1;
            }
        }

        cout<<st<<endl;
    }



    return 0;
}
