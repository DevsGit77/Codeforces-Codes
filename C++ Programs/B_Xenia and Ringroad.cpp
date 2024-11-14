#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    int n,m;
    cin>>n>>m;
    int a[m];

    for(int i=0; i<m; i++)
    {
        cin>>a[i];
    }

    ll cnt = a[0]-1;

    for(int i=0; i<m-1; i++)
    {
        if(a[i] > a[i+1])
        {
            cnt += n-(a[i]-a[i+1]);
        }
        else if(a[i] < a[i+1])
        {
            cnt += a[i+1] - a[i];
        }
    }
    cout<<cnt<<endl;


    return 0;
}
