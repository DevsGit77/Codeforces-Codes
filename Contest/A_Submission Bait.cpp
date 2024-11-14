
#include <bits/stdc++.h>
#define ll long long
using namespace std;




int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll n,count =0;
        cin>>n;
        ll a[n];

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        int i=0, j=n-1;

        while(i<=j)
        {
            if(a[i] == a[j])
            {
                i++;
                j--;
            }

            else if(a[i]>a[j])
            {
                a[j-1] += a[j];
                count++;
                j--;
            }
            else
            {
                a[i+1] += a[i];
                count++;
                i++;
            }
        }

        cout<<count<<endl;
    }

    return 0;
}
