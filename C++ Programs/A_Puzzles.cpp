#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void sol(int s, int p)
{
    int a[p];
    int m;
    for(int i=0; i<p; i++)
    {
        cin>>a[i];
    }
    sort(a,a+p);
    m = a[p-1]-a[0];

    int ans;
    for(int i=s; i<=p; i++)
    {
        ans = a[i-1]- a[i-s];
        ans = abs(ans);
        m = min(m,ans);
    }
    cout<<m<<endl;
}

int main()
{
    int s,p;
    cin>>s>>p;

    sol(s,p);

    return 0;
}
