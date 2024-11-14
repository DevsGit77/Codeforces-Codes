
#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;



void AF()
{
    int n;
    cin>>n;

    vector<int>na(n);


    for(int i=0; i<n; i++) cin >> na[i];

    if (is_sorted(na.begin(), na.end()))
    {
        cout<<"YES"<<endl;
        return;
    }

    vector<int> t_na;

    t_na.push_back(na.back());

    for (int i = n-2; i>=0; i--)
    {
        if (na[i] >= 10 && na[i] > t_na.back())
        {
            t_na.push_back(na[i]%10);
            t_na.push_back(na[i]/10);
        }
        else
        {
            t_na.push_back(na[i]);
        }
    }

    reverse(t_na.begin(), t_na.end());

    if(is_sorted(t_na.begin(), t_na.end()))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}


int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
        AF();
    }

    return 0;
}
