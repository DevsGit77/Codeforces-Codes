
#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;

void Informatics()
{
    int len;
    cin>>len;

    vector<int>ara(len);

    unordered_map<int,int>mp;

    for(int i=0; i<len; i++)
    {
        cin >> ara[i];
        mp[ara[i]]++;
    }


    set<int>s1,s2;

    int l=0;


    for(l=0; mp[l] >= 2; l++)
    {
        s1.insert(l);
        s2.insert(l);
    }

    if(mp[l]>0)
    {
        cout<<-1<<endl;
    }
    else
    {
        int rem=0;

        for(int i=0; i<len; i++)
        {
            if(s1.find(ara[i])!= s1.end())
            {
                s1.erase(ara[i]);
            }

            if(s1.size()==0)
            {
                rem=i+1;
                break;
            }
        }

        for(int i=rem; i<len; i++)
        {
            if(s2.find(ara[i]) != s2.end())
            {
                s2.erase(ara[i]);
            }
        }


        if(s2.size() == 0)
        {
            cout<<2<<endl;
            cout<<1<<" "<<rem<<endl;
            cout<<rem+1<<" "<<len<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
}


int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
        Informatics();
    }

    return 0;
}
