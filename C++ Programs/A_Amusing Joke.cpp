#include <bits/stdc++.h>
using namespace std;

void solve(string a , string b, string c)
{
    string sums;
    sums = a+b;
    sort(sums.begin(), sums.end());
    sort(c.begin(), c.end());

    if(sums == c)
    {
        cout<< "YES" <<endl;
    }
    else
    {
        cout<< "NO"<<endl;
    }
}

int main()
{
    string f,s,t;
    cin>>f>>s>>t;
    solve(f,s,t);

    return 0;
}
