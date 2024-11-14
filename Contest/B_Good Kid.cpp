#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, cnt0 = 0;

    cin>>t;

    while(t--)
    {
        cin>>n;
        int ara[n];
        int mult = 1;
        for(int i = 0; i<n; i++)
        {
            cin>>ara[i];
        }

        sort(ara,ara+n);
        ara[0] += 1;

        for(int i = 0; i<n; i++)
        {
            mult *= ara[i];
        }
        cout<<mult<<endl;

    }


    return 0;
}
