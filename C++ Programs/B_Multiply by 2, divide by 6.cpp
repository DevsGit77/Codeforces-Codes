
#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;

void Mul_Div()
{
    ll n;
    cin>>n;

    int cnt=0, res=0;

    while(n)
    {
        if(n==1)
        {
            break;
        }
        if(n%6==0)
        {
            n /= 6;
            cnt=0;
            res++;
        }
        else
        {
            n *= 2;
            cnt++;

            if(cnt==3 && n%6 != 0)
            {
                cout<<-1<<endl;
                return;
            }
            else if(cnt==3)
            {
                cnt=0;
            }
            else
                res++;
        }

    }
    cout<<res<<endl;

}


int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
        Mul_Div();
    }

    return 0;
}
