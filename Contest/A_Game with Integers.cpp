#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int t)
{
    while(t--)
    {
        int n, sb, ad;
        cin>>n;

        sb = n-1;
        ad = n+1;

        if(sb%3 == 0 || ad%3 == 0)
        {
            cout<<"First"<<endl;
        }
        else
        {
            cout<<"Second"<<endl;
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
