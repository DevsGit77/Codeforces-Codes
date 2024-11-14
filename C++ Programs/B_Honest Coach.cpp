#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;


void Honest_Coach()
{
    int n;
    cin>>n;

    vector<int> v(n);

    for(int i=0; i<n; i++) cin>>v[i];

    sort(v.begin(), v.end());

    int mn = INT_MAX;

    for(int i=1; i<n; i++)
    {
        int dif = abs(v[i-1]-v[i]);

        if(dif < mn)
        {
            mn = dif;

            if(mn==0)
            {
                cout<<0<<endl;
                return;
            }
        }
    }

    cout<<mn<<endl;
}


int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
        Honest_Coach();
    }

    return 0;
}
