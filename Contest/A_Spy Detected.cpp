#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    int temp, a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }


    for(int i=1; i<n; i++)
    {
        if(a[i] == a[i-1])
        {
            temp = a[i];
        }
        else if( temp != a[i])
        {
            cout<<i<<endl;
            break;
        }
    }

}


int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }



    return 0;
}
