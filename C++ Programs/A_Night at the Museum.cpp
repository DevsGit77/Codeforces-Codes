#include <bits/stdc++.h>
#define ll long long
#define fr(i,a,n) for (int i=a; i<n; i++)
#define maze(n) for (int i=0; i<n; i++)
#define all(v) (v).begin(), (v).end()
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using lld = long double;
using namespace std;



void Joy_Sol()
{
    string s;
    cin>>s;

    char ch='a';
    int res=0;

    for(int i=0; i<s.length(); i++)
    {
        res += min(abs(s[i]-ch), 26 - abs(s[i]-ch));
        ch = s[i];
    }

    cout<<res<<endl;
}



int main()
{
    speed;

//    int tc;
//    cin>>tc;
//
//    while(tc--)
//    {
        Joy_Sol();
//    }

    return 0;
}

