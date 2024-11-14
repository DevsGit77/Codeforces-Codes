#include <bits/stdc++.h>
using namespace std;

void sol(int n)
{
    while(n--)
    {
        string a = "Timur";


        int r;
        cin>>r;

        string ara;
        cin>>ara;
        sort(a.begin(),a.end());
        sort(ara.begin(), ara.end());

        if(a == ara)
        {
            cout<<"YES"<<endl;
        }

        else
        {
            cout<<"NO"<<endl;
        }
    }
}

int main()
{
    int t;
    cin>>t;
    sol(t);

    return 0;
}
