#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    string s;
    cin>>s;

    int len = s.size()-1;
    for(int i=len; i>=0; i--)
    {
        cout<<s[i]<<" ";
    }
    cout<<endl;
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
