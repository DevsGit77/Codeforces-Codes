#include <bits/stdc++.h>
#define ll long long
using namespace std;




int main()
{
    int n,count=0;
    cin>>n;

    int a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a, a+n);

    for(int i=0; i<n; i++)
    {
        for(int j = 1; j<n; j++)
        {
            if(a[i]+1==a[j])
            {
                count++;
                break;
            }
        }
    }
    cout<<count<<endl;


    return 0;
}
