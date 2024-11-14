#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;

void Transportation()
{
    ll n, k, sum=1;
    cin>>n>>k;

    vector<ll>v(n);

    for(int i=1; i<n; i++)
    {
        cin>>v[i];
    }

    while(sum < n && sum < k)
    {
        sum += v[sum];

        if(sum == k)
        {
            cout << "YES"<<endl;
            return;
        }
    }
    cout << "NO"<<endl;
}


int main()
{
    speed;

//    int tc;
//    cin>>tc;

//    while(tc--)
//    {
        Transportation();
//    }

    return 0;
}

