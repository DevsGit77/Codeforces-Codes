#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void check(int x)
{
    int ara[x];
    int cnteven=0,k,l, cntodd = 0;

    for(int i=0; i<x; i++)
    {
        cin>>ara[i];
        if(ara[i]%2 == 0)
        {
            cnteven++;
            k = i;
        }
        else
        {
            cntodd++;
            l = i;
        }
    }

    if(cnteven>cntodd)
    {
        cout<<l+1<<endl;
    }
    else
    {
        cout<<k+1<<endl;
    }

}



int main()
{
    int n;
    cin>>n;

    check(n);


    return 0;
}
