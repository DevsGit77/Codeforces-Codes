#include <bits/stdc++.h>
using namespace std;

void solve(int t)
{
    while(t--)
    {
        int n,sum=0;;
        cin>>n;
        int a[n-1];


        for(int i=0; i<n-1; i++)
        {
            cin>>a[i];
            sum += a[i];
        }

        cout<<sum*(-1)<<endl;
    }
}


int main()
{
    int t;
    cin>>t;
    solve(t);

    return 0;
}
