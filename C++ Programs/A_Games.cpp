#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void checkUni(int m)
{
    int h[m];
    int a[m];
    int cnt=0;

    for(int i=0; i<m; i++)
    {
        cin>>h[i];
        cin>>a[i];
    }

    for(int i=0; i<m; i++)
    {
        for(int k=0; k<m; k++)
        {
            if(h[i]==a[k])
            {
                cnt++;
            }
        }
    }

    cout<<cnt<<endl;
}


int main()
{
    int n;
    cin>>n;

    checkUni(n);
}
