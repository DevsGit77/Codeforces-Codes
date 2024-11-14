#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;

void F_S()
{
    ll n;
    cin>>n;

    vector<ll>v(n+1);

    string str="";
    char ch = 'a';

    map<char, ll>mp;

    for(int i=1; i<=n; i++)
    {
        cin>>v[i];

        if(v[i]==0)
        {
            str += ch;
            mp[ch]++;
            ch++;
        }
        else
        {
            for(char c='a'; c<='z'; c++)
            {
                if(mp[c] == v[i])
                {
                    mp[c]++;
                    str += c;
                    break;
                }
            }
        }
    }


    cout<<str<<endl;
}


int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
        F_S();
    }

    return 0;
}
