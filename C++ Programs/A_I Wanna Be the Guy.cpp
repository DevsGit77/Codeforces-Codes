#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q,cnt=0;
    int ara[300];

    cin>>n;
    cin>>p;

    for(int i=0; i<p; i++)
    {
        cin>>ara[i];
    }
    cin>>q;
    for(int i = p; i<(p+q); i++)
    {
        cin>>ara[i];
    }

    sort(ara, ara+(p+q));

    for(int j=0; j<(p+q); j++)
    {
        if(ara[j] != ara[j+1])
        {
            cnt++;
        }
    }
    if(cnt == n)
    {
        cout<<"I become the guy."<<endl;
    }
    else
    {
        cout<<"Oh, my keyboard!"<<endl;
    }

    return 0;
}
