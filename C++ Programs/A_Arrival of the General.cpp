#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, b=0, s=102, bi, si;
    cin>>n;
    int ara[n];
    for(int i = 0; i<n; i++)
    {
        cin>>ara[i];
        if(ara[i]>b)
        {
            bi = i;
            b = ara[i];
        }
        if(ara[i]<=s)
        {
            si = i;
            s = ara[i];
        }
    }
    if(bi>si)
    {
        si++;
    }
    cout<<bi+(n-1)-si<<endl;


    return 0;
}
