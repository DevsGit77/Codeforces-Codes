
#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;




int main()
{
    speed;

//    int tc;
//    cin>>tc;
//
//    while(tc--)
//    {
//
//    }

    int n, t;
    cin>>n>>t;

    if(t==10)
    {
        if(n==1)
            cout<<-1<<endl;
        if(n>1)
        {
            for(int i=0; i<n-1; i++)
            {
                cout<<1;
            }
            cout<<0;
        }
    }
    else
    {
        for(int i=0; i<n; i++)
        {
            cout<<t;
        }
    }

    return 0;
}
