#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    string s;
    cin>>s;

    char ch = s[0];
    int chN = s[1]-'0';


    for(char c='a'; c<='h'; c++)
    {
        if(c != ch)
        {
            cout<<c<<chN<<endl;
        }
    }
    for(int i = 1; i<=8; i++)
    {
        if( i != chN)
        {
            cout<<ch<<i<<endl;
        }
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
