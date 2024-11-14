#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(int t)
{
    while(t--)
    {
        ll n,s;
        cin>>n>>s;

        if((n*(n+1))/2 >= s)
        {
            while(s>0)
            {
                if(s<=n)
                {
                    cout<<s<<endl;
                    break;
                }
                s -= n;
                cout<<n<<" ";
                n--;
            }
        }

        else
        {
            cout<<"-1"<<endl;
        }
    }
}


int main()
{
    int t;

    cin>>t;

    solve(t);

    return 0;
}
