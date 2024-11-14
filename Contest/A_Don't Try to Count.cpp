#include <bits/stdc++.h>
using namespace std;



void solve(string x, string s)
{
    int count =0;

    while(x.size() <= 25)
    {
        if(x.find(s) == string::npos)
        {
            x +=x;
            count++;
        }
        else
        {
            cout<<count<<endl;
            return;
        }
    }

    cout<<"-1"<<endl;
    return;
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,count=0;
        cin>>n>>m;

        string x,s;
        cin>>x>>s;

        solve(x,s);
    }

    return 0;
}
