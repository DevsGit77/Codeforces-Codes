#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin>>n;

    string s;
    cin>>s;

    int cnt = 0, emp = 0, efe = 0;

    for(int i=0; i<n; i++)
    {
        if(s[i] == '.' && emp == 1)
        {
            cnt++;
            efe++;
        }
        if(efe >= 3)
        {
            cnt = 2;
            break;
        }
        if(s[i] == '.' && emp == 0)
        {
            emp = 1;
            cnt++;
            efe++;
        }
        if(emp == 1 && s[i] == '#')
        {
            emp = 0;
            efe = 0;
        }
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
