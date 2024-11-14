#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;

void  Puzzle()
{
    int n;
    cin>>n;

    vector<int>ara(n);
    int sm=0;

    for(int i=0; i<n; i++)
    {
        cin>>ara[i];

        sm += abs(ara[i]);
    }

    cout<<sm<<endl;
}


int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
        Puzzle();
    }

    return 0;
}
