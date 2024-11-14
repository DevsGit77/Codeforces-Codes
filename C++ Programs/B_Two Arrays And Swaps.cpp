#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;

void Swap()
{
    int n, k, sum = 0;
    cin>>n>>k;

    vector<int> v1(n), v2(n);

    for(int i=0; i<n; i++)
        cin>>v1[i];

    for(int i=0; i<n; i++)
        cin>>v2[i];

    sort(v1.begin(), v1.end());
    sort(v2.rbegin(), v2.rend());

    for(int i=0; i<n; i++)
    {
       if(i<k)
        sum += max(v1[i],v2[i]);
       else
        sum += v1[i];
    }

    cout<<sum<<endl;
}


int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
        Swap();
    }

    return 0;
}
