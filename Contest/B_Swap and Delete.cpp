#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{

    string s;
    cin>>s;

    int n=s.size();
    int zc=0, oc=0;

    for(int i=0; i<n; i++)
    {
        if(s[i]=='0')
            zc++;
        else
            oc++;
    }

    int cnt=0;


    for(int i=0; i<n; i++)
    {
        if(s[i]=='1')
        {
            if(zc)
            {
                zc--;
                cnt++;
            }
            else
                break;
        }

        else if(s[i]=='0')
        {
            if(oc)
            {
                oc--;
                cnt++;
            }
            else
                break;
        }
    }

    cout << n - cnt <<endl;
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
