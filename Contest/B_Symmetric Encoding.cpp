#include <bits/stdc++.h>
#define ll long long
#define fr(i,a,n) for (int i=a; i<n; i++)
#define maze(n) for (int i=0; i<n; i++)
#define all(v) (v).begin(), (v).end()
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using lld = long double;
using namespace std;


//void Dev_Sol()
//{
//    int n;
//    cin>>n;
//
//    string s;
//    cin>>s;
//
//    set<char> st(all(s));
//
//    vector<char> v(all(st));
//    sort(all(v));
//
//    vector<char> v1=v;
//    reverse(all(v));
//
//
//    map<char, char> mp;
//
//    for(int i=0; i<v.size(); i++) mp[v[i]] = v1[i];
//
//    for(auto ch : s) cout<<mp[ch];
//    cout<<endl;
//}

void Dev_Sol2()
{
    int n;
    cin>>n;

    string s;
    cin>>s;

    set<char>st(all(s));
    vector<char>v(all(st));
    map<char, char> mp;

    int len=v.size();

    maze(len)
    {
        mp[v[i]] = v[len-i-1];
    }

    maze(n)
    {
        cout<<mp[s[i]];
    }
    cout<<endl;


}


int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
        Dev_Sol2();
    }

    return 0;
}

