#include <bits/stdc++.h>
#define ll long long
using namespace std;




int main()
{
    int n, k, count = 0;
    cin>>n>>k;

    int a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if((5 - a[i]) >= k)
        {
            count++;
        }
    }
    cout<<count/3<<endl;

    return 0;
}
