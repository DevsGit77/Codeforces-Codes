#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;

void Camp()
{
    ll x, e, u;
    cin>>x>>e>>u;

    ll rem = e%3;
    ll cnt = x + e/3 ;

    if (rem==1)
    {
        if(u<2)
        {
            cout<<-1<<endl;
            return;
        }
        else
        {
            cnt++;
            u -= 2;
        }
    }

    else if(rem==2)
    {
        if(u==0)
        {
            cout<<-1<<endl;
            return;
        }
        else
        {
            cnt++;
            u--;
        }
    }


    cnt += u/3;
    u=u%3;

    if (u==0)
        cout<<cnt<<endl;
    else
        cout<<cnt+1<<endl;

}


int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
        Camp();
    }

    return 0;
}

