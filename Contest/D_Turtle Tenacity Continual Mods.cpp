#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;

void Continual_Mods()
{
    int n;
    cin>>n;


    vector<int>ara(n);

    int mn = INT_MAX;

    for(int i=0; i<n; i++)
    {
        cin>>ara[i];
        mn = min(ara[i], mn);
    }

    int mnc = count(ara.begin(), ara.end(), mn);

    if(mnc==1)
        cout<<"YES"<<endl;
    else
    {
        for(int i=0; i<n; i++)
        {
            if(ara[i]%mn != 0)
            {
                cout<<"YES"<<endl;
                return;
            }
        }

        cout<<"NO"<<endl;
    }
}


int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
        Continual_Mods();
    }

    return 0;
}
