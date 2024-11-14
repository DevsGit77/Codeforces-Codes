#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;

void Shapes()
{
    int n;
    cin>>n;

    vector<string>ara;

    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        ara.push_back(s);
    }

    int rem=0, c1=0;


    for(int r=0; r<n; r++)
    {
        for(int c=0; c<n; c++)
        {
            if(ara[r][c]=='1')
            {
                c1++;
            }
        }

        if(rem==0)
        {
            rem=c1;
            c1=0;
        }
        else if(c1==rem)
        {
            cout<<"SQUARE"<<endl;
            return;
        }
        else
        {
            cout<<"TRIANGLE"<<endl;
            return;
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
        Shapes();
    }

    return 0;
}
