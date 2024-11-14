#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
    int n,k,count=0, l;
    cin>>n>>k;

    ll a[n], sum=0;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a, a+n);

    reverse(a, a+n);

    for(int i=0; i<k; i++)
    {
        if(a[i]<0)
            break;
        sum += a[i];
    }

    cout<<sum<<endl;



    return 0;
}
