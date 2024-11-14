#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin>>n;

    string s;
    cin>>s;

    const int az = 26;
    int mx = 0;

    vector<int>indx;

    vector<vector<int>>lt_indx(az);

    for(int i=0; i<n; i++)
    {
        lt_indx[s[i] - 'a'].push_back(i);
        mx = max(mx, s[i]-'a');
    }

    int last = -1;

    for(int i = az-1; i>=0; i--)
    {
        for(int j : lt_indx[i])
        {
            if(j>last)
            {
                indx.push_back(j);
                last = j;
            }
        }
    }

    int sz = indx.size();

    string s1 = s;

    for(int i=0; i<sz; i++)
    {
        s1[indx[i]] = s[indx[sz-1-i]];
    }

    if(is_sorted(s1.begin(), s1.end()))
    {
        cout<<(sz - lt_indx[mx].size())<<endl;
    }
    else
        cout<<-1<<endl;


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
