#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int c1=0, c2 = 0, c3=0, c4 =0, cnt=0,lft;
    long long int n;
    cin>>n;
    long long int ara[n];

    for(int i = 0; i<n; i++)
    {
        cin>>ara[i];
        if(ara[i]==1)
        {
            c1++;
        }
        else if(ara[i]==2)
        {
            c2++;
        }
        else if(ara[i]==3)
        {
            c3++;
        }
        else{
            c4++;
        }
    }
    cnt += c4;

    if(c3<c1)
    {
        cnt += c3;
        c1 = c1-c3;
        c3 = 0;
    }
    else if(c1<=c3)
    {
        cnt += c1;
        c3 = c3 - c1;
        c1 = 0;
    }

    if(c3>0)
    {
        cnt += c3;
        c3 = 0;
    }
    if(c2>0)
    {
        cnt += c2/2;
        c2 = c2%2;
    }

    lft = c1 +(c2*2);

    if(lft <=4 && lft>0)
    {
        cnt += 1;
    }
    else if(lft%4 != 0)
    {
        cnt += (lft/4)+1;
    }
    else
    {
        cnt += lft/4;
    }


    cout<<cnt<<endl;

    return 0;
}
