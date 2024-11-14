#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;

void Diff()
{
    int n, m, k;
    cin>>n>>m>>k;

    vector<int>v1(k+1), v2(k+1), v(k+1);
    int cnt1=0, cnt2=0, cnt=0;

    for(int i=0; i<n; i++)
    {
        int e;
        cin>>e;
        if(e <= k)
        {
            v[e] = 1;
            v1[e] = 1;
        }
    }

    for(int i=0; i<m; i++)
    {
        int e;
        cin>>e;
        if(e <= k)
        {
            v[e] = 1;
            v2[e] = 1;
        }
    }

    for(int i=1; i<=k; i++)
    {
        if(v1[i]) cnt1++;
        if(v2[i]) cnt2++;
        if(v[i]) cnt++;
    }

    if(cnt==k && cnt1>=k/2 && cnt2>=k/2)
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
        Diff();
    }

    return 0;
}
