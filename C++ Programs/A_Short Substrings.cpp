#include <bits/stdc++.h>
using namespace std;


void solve()
{
    string s;
    cin>>s;

    int l = s.size();

    if(l==2)
    {
        cout<<s<<endl;
    }

    else
    {
        cout<<s[0];

        for(int i=1; i<l; )
        {
            if(s[i] == s[i+1])
            {
                cout<<s[i];
                i +=2;
            }
            else
            {
                cout<<s[i];
                i++;
            }
        }

        cout<<endl;
    }




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
