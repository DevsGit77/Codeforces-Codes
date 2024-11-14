#include <bits/stdc++.h>
#define ll long long
#define fr(i,a,n) for (int i=a; i<n; i++)
#define maze(n) for (int i=0; i<n; i++)
#define all(v) (v).begin(), (v).end()
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using lld = long double;
using namespace std;


void Dev_Sol()
{
    int n;
    cin>>n;

    vector<int>res(32);

    fr(i, 0, 31)
    {
        int r = n&(1<<i);

        res[i] = ((r>0)? 1 : 0);
    }

    int i=0, j;

    while(i<32)
    {
        j = i+1;

        if(res[i]==1 && j<31 && res[j]==1)
        {
            while(j<32 && res[j] == 1) j++;

            res[i] = -1;

            for(int f=i+1; f<j; f++) res[f]=0;

            res[j]=1;
        }
        i = j;
    }

    cout<<32<<endl;

    maze(32) cout<<res[i]<<" ";
    cout<<endl;
}


int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
        Dev_Sol();
    }

    return 0;
}
