/// Unfinished code


#include <bits/stdc++.h>
#define ll long long
using namespace std;


void solve(int t)
{
    while(t--)
    {
        ll n;
        cin>>n;

        ll a[n];


        ll dif_max = -1;

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        for(int p=1; p<=n; p++)
        {
            if(n%p == 0)
            {
                ll mx = LLONG_MIN, mn = LLONG_MAX;

                for(int r = 0; r < n; r += p)
                {
                    ll sum = 0;

                    for(int s = r; s < r+p; s++)
                    {
                        sum += a[s];
                    }
                    //cout<<"sum = "<<sum<<endl;

                    mx = max(mx, sum);
                    mn = min(mn, sum);
                }
                //cout<<"mx = "<<mx<<" "<<"mn = "<<mn<<endl;

                dif_max = max(dif_max, (mx - mn));

                //cout<<"dif_max = "<<dif_max<<endl;
            }
        }


        cout<<dif_max<<endl;

    }
}



int main()
{
    int t;
    cin>>t;

    solve(t);


    return 0;
}
