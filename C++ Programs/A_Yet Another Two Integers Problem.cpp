#include <bits/stdc++.h>
#define ll long long
using namespace std;




int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll a, b, dif, ans;
        cin>>a>>b;

        dif = abs(a-b);

        if(dif != 0)
        {
            if(dif%10 != 0)
            {
                cout<<(dif/10)+1<<endl;
            }
            else
            {
                cout<<(dif+9)/10<<endl;
            }
        }
        else
        {
            cout<<dif<<endl;
        }
    }

    return 0;
}
