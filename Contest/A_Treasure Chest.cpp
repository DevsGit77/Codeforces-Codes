#include <bits/stdc++.h>
using namespace std;

void solve(int t)
{
    while(t--)
    {
        int x,y,k;
        cin>>x>>y>>k;

        if(x<y)
        {
            if(y-x <= k)
            {
                cout<<y<<endl;
                continue;
            }
            else
            {
                cout<<(2*y - (x+k))<<endl;
                continue;
            }
        }

        cout<<x<<endl;
    }

}


int main()
{
    int t;
    cin>>t;

    solve(t);


    return 0;
}
