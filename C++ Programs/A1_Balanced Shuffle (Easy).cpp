#include <bits/stdc++.h>
#define ll long long
#define fr(i,a,n) for (int i=a; i<n; i++)
#define maze(n) for (int i=0; i<n; i++)
#define all(v) (v).begin(), (v).end()
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using lld = long double;
using namespace std;


void Dev_Sol()
{
    string s;
    cin>>s;

    ll len = s.length(), b=0;

    map<ll, vector<pair<ll, char>>> mp;

    maze(len)
    {
        mp[b].push_back({i, s[i]});

        if(s[i]=='(') b++;
        else b--;
    }

    for(auto it: mp)
    {
        reverse(it.second.begin(), it.second.end());

//        cout<<it.first<<" "<<endl;
        for(auto it1 : it.second)
        {
//            cout<<it1.first<<" "<<it1.second<<endl;
            cout<<it1.second;
        }
    }
    cout<<endl;
}


int main()
{
    speed;

    Dev_Sol();

    return 0;
}

