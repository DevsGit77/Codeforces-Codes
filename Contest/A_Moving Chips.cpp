#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;

void Moving_Chips()
{
    int n;
    cin>>n;

    vector<int> vc(n);


    int fi, li, cnt=0;


    for(int i=0; i<n; i++)
    {
        cin>>vc[i];

        if(vc[i] == 1)
            li = i;
    }

    for(int i=0; i<n; i++)
    {
        if(vc[i] == 1)
        {
            fi  = i;
            break;
        }
    }

    for(int i=fi; i<li; i++)
    {
        if(vc[i] == 0)
            cnt++;
    }

    cout<<cnt<<endl;
}


int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
        Moving_Chips();
    }

    return 0;
}
