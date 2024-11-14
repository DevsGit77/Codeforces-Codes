#include <bits/stdc++.h>
#define ll long long
using namespace std;




int main()
{
    int n;
    cin>>n;

    ll a[n];

    ll sumS = 0, sumD = 0;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int l=0, r=n-1, t=0;

    while(l<=r)
    {
        if(t%2 == 0)
        {
            if(a[r] > a[l])
            {
                sumS += a[r];
                r--;
            }
            else
            {
                sumS += a[l];
                l++;
            }
        }
        else
        {
            if(a[r] > a[l])
            {
                sumD += a[r];
                r--;
            }
            else
            {
                sumD += a[l];
                l++;
            }
        }
        t++;


    }




    cout<<sumS<<" "<<sumD<<endl;

    return 0;
}
