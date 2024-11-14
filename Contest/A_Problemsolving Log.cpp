#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin>>n;

    string s;
    cin>>s;

    vector<int> v(26);

    for(int i=0; i<s.length(); i++)
    {
        v[s[i] - 'A']++;
    }

    int cnt = 0;

    for(int i=0; i<26; i++)
    {
        if(v[i] >= i+1)
            cnt++;
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
