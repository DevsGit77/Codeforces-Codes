#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, cnt = 0;
    cin>>n;

    string s;
    cin>>s;


    set<char>sc;

    for(int i=0; i<s.size(); i++)
    {
        sc.insert(s[i]);

        cnt += sc.size();
    }

    cout<<cnt<<endl;

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

