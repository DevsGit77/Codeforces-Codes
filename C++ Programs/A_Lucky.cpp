#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;

    int sum1=0, sum2=0;


    for(int i=0; i<3; i++)
    {
        int n = s[i] - '0';

        sum1 += n;
    }

    for(int i=3; i<6; i++)
    {
        int n = s[i] - '0';

        sum2 += n;
    }

    if(sum1 == sum2)
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
