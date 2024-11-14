#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;

void Balloons()
{
    int n;
    cin>>n;

    string st;
    cin>>st;

    set<char>s;

    for(int i=0; i<n; i++)
    {
        s.insert(st[i]);
    }

//    int ans = 2*s.size() + (n-s.size());

    cout<<n+s.size()<<endl;
}


int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
        Balloons();
    }

    return 0;
}
