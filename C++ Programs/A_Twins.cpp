#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j,sum1=0,sum2=0,c=0;
    cin>>n;
    int s[n];

    for(i=0; i<n; i++)
    {
        cin>>s[i];
        sum1 += s[i];
    }

    sum1 = sum1/2;

    sort(s,s+n);

    for(j=n-1; j>=0; j--)
    {
        sum2 += s[j];
        c++;
        if(sum1<sum2)
        {
            break;
        }
    }

    cout<<c<<endl;

    return 0;
}
