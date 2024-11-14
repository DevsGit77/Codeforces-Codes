#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s, n, cnt=0;
    cin>>s>>n;

    pair<int,int> ara[1000];

    for(int i=0; i<n; i++)
    {
        cin>>ara[i].first>>ara[i].second;
    }

    sort(ara,ara+n);


    for(int i=0; i<n; i++)
    {
        if(s > ara[i].first)
        {
            s = s + ara[i].second;
        }
        else
        {

            cnt++;
            break;
        }
    }

    if(cnt>0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }


    return 0;
}
