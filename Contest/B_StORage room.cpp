

///Unsolved....

#include <bits/stdc++.h>
#define ll long long
using namespace std;



void solve()
{
    int n;
    cin>>n;

    int v[n][n];

    for(int i=0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            cin>>v[i][j];
        }
    }
    int fl=0;

    for(int i=0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            if(i != j && v[i][j]== 0)
            {
                fl = 1;
            }

        }
    }

{

}   if(fl==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
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
