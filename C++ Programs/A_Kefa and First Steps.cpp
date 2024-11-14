#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,c=0,maxm=1;
    cin>>n;
    int ara[n];

    for(int i = 0; i<n; i++)
    {
        cin>>ara[i];
    }

    for(int i = 0; i<n; i++)
    {
        if(ara[i] >= ara[i-1])
        {
            c++;
            maxm = max(maxm, c);
        }
        else
        {
            c = 1;
        }
    }
    cout<<maxm<<endl;

    return 0;
}
